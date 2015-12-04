/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QPushButton *nninfo;
    QLabel *nnstatus;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *train;
    QLabel *label;
    QGroupBox *estimationBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *districts;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *square;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *rooms;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpinBox *floor;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *price;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *estimate;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(959, 448);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        MainWindowClass->setMinimumSize(QSize(959, 448));
        MainWindowClass->setMaximumSize(QSize(959, 484));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 9, 941, 81));
        frame->setMinimumSize(QSize(941, 81));
        frame->setMaximumSize(QSize(941, 81));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/MainWindow/Application Resources/\320\275\320\265\320\271\321\202\321\200\320\276\320\275-865746.png);\n"
""));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(3);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        nninfo = new QPushButton(frame);
        nninfo->setObjectName(QStringLiteral("nninfo"));
        nninfo->setEnabled(true);
        nninfo->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"\n"
"border-radius : 10px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("Application Resources/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        nninfo->setIcon(icon);
        nninfo->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(nninfo, 0, 0, 1, 1);

        nnstatus = new QLabel(frame);
        nnstatus->setObjectName(QStringLiteral("nnstatus"));
        QFont font;
        font.setPointSize(9);
        nnstatus->setFont(font);
        nnstatus->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0px;"));
        nnstatus->setLineWidth(0);

        gridLayout_3->addWidget(nnstatus, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(620, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        train = new QPushButton(frame);
        train->setObjectName(QStringLiteral("train"));
        train->setMinimumSize(QSize(111, 51));
        train->setMaximumSize(QSize(111, 51));

        gridLayout_3->addWidget(train, 0, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 96, 340, 300));
        label->setMinimumSize(QSize(340, 300));
        label->setStyleSheet(QStringLiteral(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/MainWindow/Application Resources/buildings.png")));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        estimationBox = new QGroupBox(centralWidget);
        estimationBox->setObjectName(QStringLiteral("estimationBox"));
        estimationBox->setEnabled(true);
        estimationBox->setGeometry(QRect(445, 96, 505, 302));
        estimationBox->setMaximumSize(QSize(518, 302));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(9);
        estimationBox->setFont(font1);
        gridLayout_2 = new QGridLayout(estimationBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(estimationBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(151, 41));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        districts = new QComboBox(estimationBox);
        districts->setObjectName(QStringLiteral("districts"));
        districts->setMinimumSize(QSize(150, 20));

        horizontalLayout->addWidget(districts);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(estimationBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(151, 41));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        square = new QDoubleSpinBox(estimationBox);
        square->setObjectName(QStringLiteral("square"));
        square->setMinimumSize(QSize(150, 20));
        square->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        square->setMinimum(1);
        square->setMaximum(999999);
        square->setValue(10);

        horizontalLayout_2->addWidget(square);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(estimationBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(151, 40));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        rooms = new QSpinBox(estimationBox);
        rooms->setObjectName(QStringLiteral("rooms"));
        rooms->setMinimumSize(QSize(150, 20));
        rooms->setMinimum(1);
        rooms->setMaximum(100);

        horizontalLayout_3->addWidget(rooms);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(estimationBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(151, 41));
        label_6->setFont(font1);

        horizontalLayout_4->addWidget(label_6);

        floor = new QSpinBox(estimationBox);
        floor->setObjectName(QStringLiteral("floor"));
        floor->setMinimumSize(QSize(150, 20));
        floor->setMinimum(0);
        floor->setMaximum(100);

        horizontalLayout_4->addWidget(floor);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(estimationBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(217, 79));
        QFont font2;
        font2.setPointSize(13);
        label_5->setFont(font2);

        horizontalLayout_5->addWidget(label_5);

        price = new QLabel(estimationBox);
        price->setObjectName(QStringLiteral("price"));
        price->setEnabled(true);
        price->setMinimumSize(QSize(216, 79));
        QPalette palette;
        QBrush brush(QColor(85, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        price->setPalette(palette);
        QFont font3;
        font3.setFamily(QStringLiteral("MS Reference Sans Serif"));
        font3.setPointSize(13);
        price->setFont(font3);

        horizontalLayout_5->addWidget(price);


        gridLayout_2->addLayout(horizontalLayout_5, 3, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(138, 123, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(38, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        estimate = new QPushButton(estimationBox);
        estimate->setObjectName(QStringLiteral("estimate"));

        gridLayout_2->addWidget(estimate, 1, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 959, 21));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0));
        nninfo->setText(QString());
        nnstatus->setText(QApplication::translate("MainWindowClass", "\320\235\320\265\320\271\321\200\320\276\320\275\320\275\320\260\321\217 \321\201\320\265\321\202\321\214 \320\265\321\211\320\265 \320\275\320\265 \320\276\320\261\321\203\321\207\320\265\320\275\320\260", 0));
        train->setText(QApplication::translate("MainWindowClass", "\320\236\320\261\321\203\321\207\320\270\321\202\321\214\n"
" \320\275\320\265\320\271\321\200\320\276\320\275\320\275\321\203\321\216 \321\201\320\265\321\202\321\214", 0));
        label->setText(QString());
        estimationBox->setTitle(QApplication::translate("MainWindowClass", "\320\236\321\206\320\265\320\275\320\272\320\260 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\320\270 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\321\213", 0));
        label_3->setText(QApplication::translate("MainWindowClass", "\320\240\320\260\320\271\320\276\320\275:", 0));
        label_2->setText(QApplication::translate("MainWindowClass", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214:", 0));
        square->setSuffix(QApplication::translate("MainWindowClass", " \320\272\320\262.\320\274.", 0));
        label_4->setText(QApplication::translate("MainWindowClass", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202:", 0));
        label_6->setText(QApplication::translate("MainWindowClass", "\320\255\321\202\320\260\320\266:", 0));
        label_5->setText(QApplication::translate("MainWindowClass", "\320\236\321\206\320\265\320\275\320\276\321\207\320\275\320\260\321\217 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214:", 0));
        price->setText(QString());
        estimate->setText(QApplication::translate("MainWindowClass", "\320\236\321\206\320\265\320\275\320\270\321\202\321\214 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
