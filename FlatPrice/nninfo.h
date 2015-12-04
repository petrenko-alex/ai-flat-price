#ifndef NNINFO_H
#define NNINFO_H

#include <QWidget>
#include "ui_nninfo.h"

class NNInfo : public QWidget
{
	Q_OBJECT

public:
	NNInfo(QWidget *parent,
		int inputParametres,int outputParametres,
		int inputNeurons, int outputNeurons,
		QString algorithm,int trainingSetSize,int maxIts,int restarts,double decay);
	~NNInfo();

private:
	Ui::NNInfo ui;
};

#endif // NNINFO_H
