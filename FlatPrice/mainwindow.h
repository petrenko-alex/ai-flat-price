#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QDebug>
#include <QLocale>
#include <QFileDialog>
#include <QMessageBox>
#include <QVector>
#include <QVariant>
#include <vector>
#include "ui_mainwindow.h"
#include "nninfo.h"
#include "BasicExcel.hpp"
#include "../src/dataanalysis.h"
#include "../src//ap.h"

#define  COLUMS_TO_READ 5
#define	 DIGITS_IN_ONE_MILLION_NUMBER 7
#define  UNICODE_NUMBER_OF_RUBLE 8381
#define  DIGITS_TO_NEXT_SPLITTER 4

/* Кодирование номинальных данных - районов ( пример для для файла "Volgograd New Flats.xls" )

   1. Центральный		1 0 0 0 0 0 0 0
   2. Ворошиловский		0 1 0 0 0 0 0 0
   3. Советский			0 0 1 0 0 0 0 0
   4. Тракторозаводский 0 0 0 1 0 0 0 0
   5. Краснооктябрьский 0 0 0 0 1 0 0 0
   6. Дзержинский		0 0 0 0 0 1 0 0
   7. Кировский			0 0 0 0 0 0 1 0
   8. Красноармейский   0 0 0 0 0 0 0 1

*/


class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:

	/* Слот - вызывается по кнопке "Обучить нейронную сеть" */
	void createAndTrainNeuralNetwork();

	/* Слот - вызывается по кнопке "Оценить стоимость" */
	void estimatePrice();

	/* Слот - вызывается по кнопке "i" */
	void showNeuralNetworkInfo();

private:
	/* Установить соединения сигналов и слотов */
	void setConnections();

	/* Сброс данных при создании новой нейронной сети */
	void resetData();

	/* Сформировать выпадающий список с районами */
	void makeDistrictsComboBox(QStringList districts);

	/* Форматирование выходной строки с ценой */
	void makeOutputString(QString &price);

	/* Прочитать Excel xls файл с обучающей выборкой */
	QVector<QVector<QVariant>> readExcelFile(QString& filename) throw(QString &);

	/* Подготовить Alglib массив с данными обучающей выборки */
	alglib::real_2d_array prepareDataForNeuralNetwork(QVector<QVector<QVariant>> &data);

	/* Представить номинальный данные(районы) по схеме "1-of-N" */
	QMap<QString, QVector<float>> codeDistricts(QVector<QVector<QVariant>> &data);

	/* Данные */
	Ui::MainWindowClass ui;
	NNInfo *nnInfo;
	double **dataForAlglib;
	QVector<QVector<QVariant>> excelFileData;
	QMap<QString, QVector<float>> codedDistricts;

	alglib::mlptrainer trainer;
	alglib::multilayerperceptron neuralNetwork;

	alglib::ae_int_t inputsNumber = 0;
	alglib::ae_int_t outputsNumber = 1;
	alglib::ae_int_t trainingSetSize = 0;
	alglib::ae_int_t hiddenNeuronsNumber = 3;
};

#endif // MAINWINDOW_H
