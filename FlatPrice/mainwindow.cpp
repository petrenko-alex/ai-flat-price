#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	dataForAlglib = nullptr;
	nnInfo = nullptr;
	ui.nnstatus->setAttribute(Qt::WA_TranslucentBackground);
	ui.nninfo->setVisible(false);
	ui.estimationBox->setEnabled(false);

	setConnections();
}

MainWindow::~MainWindow()
{
	excelFileData.clear();
	codedDistricts.clear();
	if (dataForAlglib != nullptr)
	{
		delete dataForAlglib;
	}
	if (nnInfo != nullptr)
	{
		delete nnInfo;
	}
}

void MainWindow::createAndTrainNeuralNetwork()
{
	resetData();
	alglib::ae_int_t info;
	alglib::mlpreport report;
	QVector<QVector<QVariant>> data;
	QString fileName = QFileDialog::getOpenFileName(this, QString("Выберите xls файл с данными для обучения нейронной сети"), QString(), QString("Excel файлы (*.xls)"));

	if ( !fileName.isEmpty() )
	{
		try
		{
			data = readExcelFile(fileName);
		}
		catch ( QString &errorStr )
		{
			QMessageBox::critical(this, "Ошибка загрузки", errorStr);
			return;
		}
	}
	else
	{
		QMessageBox::critical(this, "Ошибка загрузки", "Вы не выбрали файл.");
		return;
	}

	/* Устанавливаем границы диапазонов виджетов по выборке */
	setLimitsToWidgits(data);

	/* Преобразуем считанные из файла данные в формат Alglib */
	alglib::real_2d_array trainingData = prepareDataForNeuralNetwork(data);

	/* Создаем учителя */
	alglib::mlpcreatetrainer(inputsNumber, outputsNumber, trainer);

	/* Создаем нейронную сеть */
	alglib::mlpcreate0(inputsNumber, outputsNumber, neuralNetwork);

	/* Устанавливаем данные для учителя */
	alglib::mlpsetdataset(trainer, trainingData, trainingSetSize);

	/* Устанавливаем параметры обучения */
	double wstep = 0.000;					// Шаг изменения весов для остановки
	double decay = 0.01;					// Коэффициент регуляризации
	alglib::ae_int_t maxits = 100;			// Максимальное количество итераций для остановки
	alglib::ae_int_t restarts = 5;			// Количество повторов прогона обучающей выборки
	alglib::mlpsetdecay(trainer, decay);
	alglib::mlpsetcond(trainer, wstep, maxits);

	/* Обучение нейронной сети */
	alglib::mlptrainnetwork(trainer, neuralNetwork, restarts, report);

	/* Кросс-валидация */
	//alglib::mlpkfoldcv(trainer,neuralNetwork, 5, 10,report);

	ui.nnstatus->setText("Нейронная сеть успешно обучена на " + QString::number(trainingSetSize) + " примерах");
	ui.nninfo->setVisible(true);
	ui.estimationBox->setEnabled(true);

	/* Создаем форму с информацией о сети */
	nnInfo = new NNInfo(0,
						excelFileData[0].size() - 1, outputsNumber,
						inputsNumber, outputsNumber,
						"L-BFGS", trainingSetSize, maxits, restarts, decay);
}

void MainWindow::estimatePrice()
{
	/* Считываем данные */
	QString districtAsString = ui.districts->currentText();
	double square = ui.square->value();
	double rooms = ui.rooms->value();
	double floor = ui.floor->value();

	/* Готовим данные для Alglib */
	QVector<float> dataForAlglib = codedDistricts.value(districtAsString);
	dataForAlglib.append(square);
	dataForAlglib.append(rooms);
	dataForAlglib.append(floor);

	/* Формируем строку инициализации для вектора Alglib */
	int size = dataForAlglib.size();
	QString initializerString = "[";
	for (int i = 0; i < size; ++i)
	{
		initializerString += QString::number(dataForAlglib[i], 'f', 2);
		initializerString += ",";
	}
	size = initializerString.size();
	initializerString.remove(size - 1, 1);
	initializerString += "]";

	alglib::real_1d_array flatInfo(initializerString.toStdString ().c_str ());
	alglib::real_1d_array flatPrice;
	qDebug() << flatInfo.tostring(1).c_str ();

	/* Рассчитываем стоимость */
	alglib::mlpprocess(neuralNetwork, flatInfo, flatPrice);

	/* Выводим результат */
	QString price(flatPrice.tostring(1).c_str());
	makeOutputString(price);
	ui.price->setText(price);
}

void MainWindow::showNeuralNetworkInfo()
{
	nnInfo->show();
}

void MainWindow::setConnections()
{
	connect(ui.train, SIGNAL(clicked(bool)), this, SLOT(createAndTrainNeuralNetwork()));
	connect(ui.nninfo, SIGNAL(clicked(bool)), this, SLOT(showNeuralNetworkInfo()));
	connect(ui.estimate, SIGNAL(clicked(bool)), this, SLOT(estimatePrice ()));
}

void MainWindow::resetData()
{
	ui.nninfo->setVisible(false);
	ui.estimationBox->setEnabled(false);
	ui.nnstatus->setText("Нейронная сеть еще не обучена");
	if (nnInfo != nullptr)
	{
		delete nnInfo;
		nnInfo = nullptr;
	}
	if (dataForAlglib != nullptr)
	{
		delete dataForAlglib;
		dataForAlglib = nullptr;
	}
	excelFileData.clear();
	codedDistricts.clear();
	inputsNumber = 0;
	outputsNumber = 1;
	trainingSetSize = 0;
	hiddenNeuronsNumber = 3;
}

void MainWindow::makeDistrictsComboBox(QStringList districts)
{
	ui.districts->clear();

	for (auto district : districts)
	{
		ui.districts->addItem(district);
	}
}

void MainWindow::makeOutputString(QString &price)
{
	if (price.contains("["))
	{
		price.remove("[");
	}

	if (price.contains("]"))
	{
		price.remove("]");
	}

	/* Удаляем символы после точки */
	if (price.contains('.'))
	{
		int size = price.size();
		int indexOfDot = price.indexOf('.');
		int symbolsAfterDot = size - indexOfDot;
		price.remove(indexOfDot, symbolsAfterDot);
	}
	/* Форматирование в соответствии с локализацией компьютера */
	QLocale current = QLocale::system();
	price = current.toCurrencyString(price.toFloat());
}

QVector<QVector<QVariant>> MainWindow::readExcelFile(QString& filename) throw(QString &)
{
	QVector<QVector<QVariant>> result;
	YExcel::BasicExcel excelFile;

	bool isLoaded = excelFile.Load(qPrintable(filename));
	if ( !isLoaded )
	{
		QString errorStr("Не удалось загрузить файл с данными.");
		throw errorStr;
	}

	YExcel::BasicExcelWorksheet *sheet = excelFile.GetWorksheet(size_t(0));
	if ( sheet )
	{
		size_t rows = sheet->GetTotalRows();
		size_t columns = sheet->GetTotalCols();

		
		for ( size_t i = 1; i < rows; ++i )
		{
			QVector<QVariant> row;
			for ( size_t j = 0; j < COLUMS_TO_READ; ++j )
			{
				YExcel::BasicExcelCell *cell = sheet->Cell(i, j);

				switch ( cell->Type () )
				{
					case  YExcel::BasicExcelCell::UNDEFINED :
					{
						qDebug() << "Undefined data inside cell  #[" + QString::number(i+1) + ";" + QString::number(j+1) + "] in file " + filename;
					}
					break;

					case YExcel::BasicExcelCell::INT :
					{
						row.append(QVariant(cell->GetInteger()));
					}
					break;

					case YExcel::BasicExcelCell::DOUBLE :
					{
						row.append(QVariant(cell->GetDouble()));
					}
					break;

					case YExcel::BasicExcelCell::STRING :
					{
						row.append(QVariant(cell->GetString()));
					}
					break;

					case YExcel::BasicExcelCell::WSTRING:
					{
						QString tmp = QString::fromStdWString(cell->GetWString());
						row.append(QVariant(tmp));
					}
					break;

					default:
					{
						qDebug() << "Default switch-case block was reached in readExcelFile function.";
					}
					break;
				}
			}
			result << row;
			row.clear();
		}
	}
	else
	{
		QString errorStr("Не удалось считать данные из файла.");
		throw errorStr;
	}

	excelFileData = result;
	return result;
}

alglib::real_2d_array MainWindow::prepareDataForNeuralNetwork(QVector<QVector<QVariant>> &data)
{
	/* Кодируем номинальные данные - район */
	codedDistricts = codeDistricts(data);

	int rows = data.size();
	int columnsCount = data[0].size();
	int districtColumnsCount = codedDistricts.first().size();
	int columns = (columnsCount + districtColumnsCount - 1);

	dataForAlglib = new double*[rows];
	for (int i = 0; i < rows; ++i)
	{
		dataForAlglib[i] = new double[columns];
	}

	/* Заполняем двумерный динамический массив */
	for (int i = 0; i < rows; ++i)
	{
		int j = 0;
		for (; j < districtColumnsCount; ++j)
		{
			dataForAlglib[i][j] = codedDistricts.value(data[i][0].toString())[j];
		}

		for (int k = 1; j < columns,k < columnsCount; ++j,++k)
		{
			double tmp = data[i][k].toDouble();
			dataForAlglib[i][j] = data[i][k].toFloat();
		}
	}

	/* Параметры обучающей выборки */
	inputsNumber = (columns - 1);
	outputsNumber = 1;
	trainingSetSize = data.size();

	/* Формируем строку инициализации для массива Alglib */
	QString initializerString = "[";
	for (int i = 0; i < rows; ++i)
	{
		initializerString += "[";
		for (int j = 0; j < columns; ++j)
		{
			initializerString += QString::number(dataForAlglib[i][j],'f',2);
			initializerString += ",";
		}
		int size = initializerString.size();
		initializerString.remove(size - 1, 1);
		initializerString += "]";
		initializerString += ",";
	}
	int size = initializerString.size();
	initializerString.remove(size - 1, 1);
	initializerString += "]";


	alglib::real_2d_array trainingData(initializerString.toStdString ().c_str ());
	
	return trainingData;
}

QMap<QString, QVector<float>> MainWindow::codeDistricts(QVector<QVector<QVariant>> &data)
{
	QMap<QString, QVector<float>> result;

	QStringList districts;
	for (auto i : data)
	{
		districts << i[0].toString();
	}

	districts.removeDuplicates();
	makeDistrictsComboBox(districts);

	int districtsCount = districts.size();
	for (int i = 0; i < districtsCount; ++i)
	{
		QVector<float> tmp(districtsCount, 0);
		tmp[i] = 1;
		result.insert(districts[i], tmp);
	}

	return result;
}

void MainWindow::setLimitsToWidgits(QVector<QVector<QVariant>> &data)
{
	double minSquare = MAX_VALUE_OF_CRITERION,
		   minRooms = MAX_VALUE_OF_CRITERION, 
		   minFloor = MAX_VALUE_OF_CRITERION;

	double maxSquare = 0,
	       maxRooms = 0, 
		   maxFloor = 0;

	for (auto i : data)
	{
		if (i[1].toDouble() < minSquare)
		{
			minSquare = i[1].toDouble();
		}

		if (i[1].toDouble() > maxSquare)
		{
			maxSquare = i[1].toDouble();
		}

		if (i[2].toDouble() < minRooms)
		{
			minRooms = i[2].toDouble();
		}

		if (i[2].toDouble() > maxRooms)
		{
			maxRooms = i[2].toDouble();
		}

		if (i[3].toDouble() < minFloor)
		{
			minFloor = i[3].toDouble();
		}

		if (i[3].toDouble() > maxFloor)
		{
			maxFloor = i[3].toDouble();
		}
	}

	ui.square->setRange(minSquare, maxSquare);
	ui.rooms->setRange(minRooms,maxRooms);
	ui.floor->setRange(minFloor,maxFloor);
}

