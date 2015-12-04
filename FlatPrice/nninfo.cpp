#include "nninfo.h"

NNInfo::NNInfo(QWidget *parent, int inputParametres, int outputParametres, int inputNeurons, int outputNeurons, QString algorithm, int trainingSetSize, int maxIts, int restarts, double decay)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.inpParametres->setText(QString::number (inputParametres));
	ui.outputParametres->setText(QString::number(outputParametres));
	ui.inpNeurons->setText(QString::number(inputNeurons));
	ui.outputNeurons->setText(QString::number(outputNeurons));
	ui.algorithm->setText(algorithm);
	ui.trainingSetSize->setText(QString::number(trainingSetSize));
	ui.maxIts->setText(QString::number(maxIts));
	ui.restarts->setText(QString::number(restarts));
	ui.decay->setText(QString::number(decay,'f',6));
}

NNInfo::~NNInfo()
{

}
