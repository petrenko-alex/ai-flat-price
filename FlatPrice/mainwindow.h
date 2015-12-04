#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QVector>
#include <QVariant>
#include <vector>
#include "ui_mainwindow.h"
#include "BasicExcel.hpp"
#include "../src/dataanalysis.h"
#include "../src//ap.h"

#define  COLUMS_TO_READ 5
#define	 DIGITS_IN_ONE_MILLION_NUMBER 7
#define  UNICODE_NUMBER_OF_RUBLE 8381
#define  DIGITS_TO_NEXT_SPLITTER 4

/* Кодирование номинальных данных - районов 

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
	void createAndTrainNeuralNetwork();
	void estimatePrice();
	void showNeuralNetworkInfo();

private:
	void setConnections();
	void makeDistrictsComboBox(QStringList districts);
	void makeOutputString(QString &price);
	QVector<QVector<QVariant>> readExcelFile(QString& filename) throw(QString &);
	
	alglib::real_2d_array prepareDataForNeuralNetwork(QVector<QVector<QVariant>> &data);
	QMap<QString, QVector<float>> codeDistricts(QVector<QVector<QVariant>> &data);

	Ui::MainWindowClass ui;
	QVector<QVector<QVariant>> excelFileData;
	QMap<QString, QVector<float>> codedDistricts;
	double **dataForAlglib;

	alglib::multilayerperceptron neuralNetwork;
	alglib::mlptrainer trainer;


	alglib::ae_int_t inputsNumber = 0;
	alglib::ae_int_t outputsNumber = 1;
	alglib::ae_int_t trainingSetSize = 0;
	alglib::ae_int_t hiddenNeuronsNumber = 5;
};

#endif // MAINWINDOW_H
