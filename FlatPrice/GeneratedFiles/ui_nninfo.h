/********************************************************************************
** Form generated from reading UI file 'nninfo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NNINFO_H
#define UI_NNINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NNInfo
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *inpParametres;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *outputParametres;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *inpNeurons;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *outputNeurons;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLabel *algorithm;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLabel *trainingSetSize;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLabel *maxIts;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *restarts;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *decay;

    void setupUi(QWidget *NNInfo)
    {
        if (NNInfo->objectName().isEmpty())
            NNInfo->setObjectName(QStringLiteral("NNInfo"));
        NNInfo->resize(498, 374);
        gridLayout = new QGridLayout(NNInfo);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(NNInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        inpParametres = new QLabel(groupBox);
        inpParametres->setObjectName(QStringLiteral("inpParametres"));

        horizontalLayout->addWidget(inpParametres);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        outputParametres = new QLabel(groupBox);
        outputParametres->setObjectName(QStringLiteral("outputParametres"));

        horizontalLayout_2->addWidget(outputParametres);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        inpNeurons = new QLabel(groupBox);
        inpNeurons->setObjectName(QStringLiteral("inpNeurons"));

        horizontalLayout_3->addWidget(inpNeurons);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        outputNeurons = new QLabel(groupBox);
        outputNeurons->setObjectName(QStringLiteral("outputNeurons"));

        horizontalLayout_4->addWidget(outputNeurons);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_8->addWidget(label_6);

        algorithm = new QLabel(groupBox);
        algorithm->setObjectName(QStringLiteral("algorithm"));

        horizontalLayout_8->addWidget(algorithm);


        gridLayout_2->addLayout(horizontalLayout_8, 6, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_9->addWidget(label_5);

        trainingSetSize = new QLabel(groupBox);
        trainingSetSize->setObjectName(QStringLiteral("trainingSetSize"));

        horizontalLayout_9->addWidget(trainingSetSize);


        gridLayout_2->addLayout(horizontalLayout_9, 7, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        horizontalLayout_5->addWidget(label_7);

        maxIts = new QLabel(groupBox);
        maxIts->setObjectName(QStringLiteral("maxIts"));

        horizontalLayout_5->addWidget(maxIts);


        gridLayout_2->addLayout(horizontalLayout_5, 8, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        horizontalLayout_6->addWidget(label_9);

        restarts = new QLabel(groupBox);
        restarts->setObjectName(QStringLiteral("restarts"));

        horizontalLayout_6->addWidget(restarts);


        gridLayout_2->addLayout(horizontalLayout_6, 9, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        horizontalLayout_7->addWidget(label_8);

        decay = new QLabel(groupBox);
        decay->setObjectName(QStringLiteral("decay"));

        horizontalLayout_7->addWidget(decay);


        gridLayout_2->addLayout(horizontalLayout_7, 10, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(NNInfo);

        QMetaObject::connectSlotsByName(NNInfo);
    } // setupUi

    void retranslateUi(QWidget *NNInfo)
    {
        NNInfo->setWindowTitle(QApplication::translate("NNInfo", "NNInfo", 0));
        groupBox->setTitle(QApplication::translate("NNInfo", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\275\320\265\320\271\321\200\320\276\320\275\320\275\320\276\320\271 \321\201\320\265\321\202\320\270", 0));
        label_3->setText(QApplication::translate("NNInfo", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\205\320\276\320\264\320\275\321\213\321\205 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262:", 0));
        inpParametres->setText(QString());
        label_4->setText(QApplication::translate("NNInfo", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\321\205\320\276\320\264\320\275\321\213\321\205 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262:", 0));
        outputParametres->setText(QString());
        label->setText(QApplication::translate("NNInfo", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\205\320\276\320\264\320\275\321\213\321\205 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262:", 0));
        inpNeurons->setText(QString());
        label_2->setText(QApplication::translate("NNInfo", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\321\205\320\276\320\264\320\275\321\213\321\205 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262:", 0));
        outputNeurons->setText(QString());
        label_6->setText(QApplication::translate("NNInfo", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217:", 0));
        algorithm->setText(QString());
        label_5->setText(QApplication::translate("NNInfo", "\320\236\320\261\321\212\321\221\320\274 \320\276\320\261\321\203\321\207\320\260\321\216\321\211\320\265\320\271 \320\262\321\213\320\261\320\276\321\200\320\272\320\270:", 0));
        trainingSetSize->setText(QString());
        label_7->setText(QApplication::translate("NNInfo", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\321\202\320\265\321\200\320\260\321\206\320\270\320\271 \320\264\320\273\321\217 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217:", 0));
        maxIts->setText(QString());
        label_9->setText(QApplication::translate("NNInfo", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\262\321\202\320\276\321\200\320\276\320\262 \320\277\321\200\320\276\320\263\320\276\320\275\320\260 \320\276\320\261\321\203\321\207\320\260\321\216\321\211\320\265\320\271 \320\262\321\213\320\261\320\276\321\200\320\272\320\270:", 0));
        restarts->setText(QString());
        label_8->setText(QApplication::translate("NNInfo", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \321\200\320\265\320\263\321\203\320\273\321\217\321\200\320\270\320\267\320\260\321\206\320\270\320\270:", 0));
        decay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NNInfo: public Ui_NNInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NNINFO_H
