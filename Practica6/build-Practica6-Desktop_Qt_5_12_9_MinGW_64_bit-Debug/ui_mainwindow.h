/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_8;
    QLabel *label_9;
    QGraphicsView *GvSimulador;
    QPushButton *BtnAceptar;
    QLabel *label;
    QPushButton *BtnFinish;
    QPushButton *BtnAdd;
    QPushButton *BtnClean;
    QPushButton *BtnStop;
    QPushButton *BtnStart;
    QLabel *LblNombre;
    QLabel *LblMasa;
    QLabel *LblRadio;
    QLabel *LblVelx;
    QLabel *LblVely;
    QLabel *LblPosx;
    QLabel *LblPosy;
    QLabel *LblCant;
    QSpinBox *SboxCant;
    QLineEdit *LineNombre;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QDoubleSpinBox *SboxMasa;
    QDoubleSpinBox *SboxRadio;
    QDoubleSpinBox *SboxVelx;
    QDoubleSpinBox *SboxVely;
    QDoubleSpinBox *SboxPosx;
    QDoubleSpinBox *SboxPosy;
    QLabel *label_2;
    QLineEdit *LineArchivo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1300, 700);
        MainWindow->setMinimumSize(QSize(1300, 700));
        MainWindow->setMaximumSize(QSize(1300, 585));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 19, 161, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 39, 161, 16));
        GvSimulador = new QGraphicsView(centralwidget);
        GvSimulador->setObjectName(QString::fromUtf8("GvSimulador"));
        GvSimulador->setGeometry(QRect(280, 10, 1021, 761));
        BtnAceptar = new QPushButton(centralwidget);
        BtnAceptar->setObjectName(QString::fromUtf8("BtnAceptar"));
        BtnAceptar->setGeometry(QRect(180, 70, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 410, 281, 291));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/Inicio.jpg")));
        label->setScaledContents(true);
        BtnFinish = new QPushButton(centralwidget);
        BtnFinish->setObjectName(QString::fromUtf8("BtnFinish"));
        BtnFinish->setGeometry(QRect(190, 282, 75, 51));
        BtnAdd = new QPushButton(centralwidget);
        BtnAdd->setObjectName(QString::fromUtf8("BtnAdd"));
        BtnAdd->setGeometry(QRect(31, 280, 75, 23));
        BtnClean = new QPushButton(centralwidget);
        BtnClean->setObjectName(QString::fromUtf8("BtnClean"));
        BtnClean->setGeometry(QRect(112, 280, 75, 23));
        BtnStop = new QPushButton(centralwidget);
        BtnStop->setObjectName(QString::fromUtf8("BtnStop"));
        BtnStop->setGeometry(QRect(112, 310, 75, 23));
        BtnStart = new QPushButton(centralwidget);
        BtnStart->setObjectName(QString::fromUtf8("BtnStart"));
        BtnStart->setGeometry(QRect(31, 310, 75, 23));
        LblNombre = new QLabel(centralwidget);
        LblNombre->setObjectName(QString::fromUtf8("LblNombre"));
        LblNombre->setGeometry(QRect(31, 100, 37, 16));
        LblMasa = new QLabel(centralwidget);
        LblMasa->setObjectName(QString::fromUtf8("LblMasa"));
        LblMasa->setGeometry(QRect(31, 126, 25, 16));
        LblRadio = new QLabel(centralwidget);
        LblRadio->setObjectName(QString::fromUtf8("LblRadio"));
        LblRadio->setGeometry(QRect(31, 153, 27, 16));
        LblVelx = new QLabel(centralwidget);
        LblVelx->setObjectName(QString::fromUtf8("LblVelx"));
        LblVelx->setGeometry(QRect(31, 179, 82, 16));
        LblVely = new QLabel(centralwidget);
        LblVely->setObjectName(QString::fromUtf8("LblVely"));
        LblVely->setGeometry(QRect(31, 206, 82, 16));
        LblPosx = new QLabel(centralwidget);
        LblPosx->setObjectName(QString::fromUtf8("LblPosx"));
        LblPosx->setGeometry(QRect(31, 232, 75, 16));
        LblPosy = new QLabel(centralwidget);
        LblPosy->setObjectName(QString::fromUtf8("LblPosy"));
        LblPosy->setGeometry(QRect(31, 259, 75, 16));
        LblCant = new QLabel(centralwidget);
        LblCant->setObjectName(QString::fromUtf8("LblCant"));
        LblCant->setGeometry(QRect(32, 71, 99, 16));
        SboxCant = new QSpinBox(centralwidget);
        SboxCant->setObjectName(QString::fromUtf8("SboxCant"));
        SboxCant->setGeometry(QRect(137, 71, 33, 20));
        SboxCant->setMinimum(1);
        LineNombre = new QLineEdit(centralwidget);
        LineNombre->setObjectName(QString::fromUtf8("LineNombre"));
        LineNombre->setGeometry(QRect(121, 100, 133, 20));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(121, 126, 131, 152));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SboxMasa = new QDoubleSpinBox(layoutWidget);
        SboxMasa->setObjectName(QString::fromUtf8("SboxMasa"));
        SboxMasa->setMinimum(-9999999.000000000000000);
        SboxMasa->setMaximum(999999.989999999990687);

        verticalLayout->addWidget(SboxMasa);

        SboxRadio = new QDoubleSpinBox(layoutWidget);
        SboxRadio->setObjectName(QString::fromUtf8("SboxRadio"));
        SboxRadio->setMaximum(9999999.990000000223517);

        verticalLayout->addWidget(SboxRadio);

        SboxVelx = new QDoubleSpinBox(layoutWidget);
        SboxVelx->setObjectName(QString::fromUtf8("SboxVelx"));
        SboxVelx->setMinimum(-9999999.000000000000000);
        SboxVelx->setMaximum(9999999.990000000223517);

        verticalLayout->addWidget(SboxVelx);

        SboxVely = new QDoubleSpinBox(layoutWidget);
        SboxVely->setObjectName(QString::fromUtf8("SboxVely"));
        SboxVely->setMinimum(-9999999.000000000000000);
        SboxVely->setMaximum(99999999.989999994635582);

        verticalLayout->addWidget(SboxVely);

        SboxPosx = new QDoubleSpinBox(layoutWidget);
        SboxPosx->setObjectName(QString::fromUtf8("SboxPosx"));
        SboxPosx->setMinimum(-99999999.000000000000000);
        SboxPosx->setMaximum(999999999.990000009536743);

        verticalLayout->addWidget(SboxPosx);

        SboxPosy = new QDoubleSpinBox(layoutWidget);
        SboxPosy->setObjectName(QString::fromUtf8("SboxPosy"));
        SboxPosy->setMinimum(-99999999.000000000000000);
        SboxPosy->setMaximum(999999999.990000009536743);

        verticalLayout->addWidget(SboxPosy);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 350, 111, 16));
        LineArchivo = new QLineEdit(centralwidget);
        LineArchivo->setObjectName(QString::fromUtf8("LineArchivo"));
        LineArchivo->setGeometry(QRect(30, 370, 221, 20));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "PRACTICA #6", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "INGRESAR CUERPOS", nullptr));
        BtnAceptar->setText(QApplication::translate("MainWindow", "Aceptar", nullptr));
        label->setText(QString());
        BtnFinish->setText(QApplication::translate("MainWindow", "Finalizar", nullptr));
        BtnAdd->setText(QApplication::translate("MainWindow", "Ingresar", nullptr));
        BtnClean->setText(QApplication::translate("MainWindow", "Limpiar", nullptr));
        BtnStop->setText(QApplication::translate("MainWindow", "Detener", nullptr));
        BtnStart->setText(QApplication::translate("MainWindow", "Iniciar", nullptr));
        LblNombre->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        LblMasa->setText(QApplication::translate("MainWindow", "Masa", nullptr));
        LblRadio->setText(QApplication::translate("MainWindow", "Radio", nullptr));
        LblVelx->setText(QApplication::translate("MainWindow", "Velocidad X inicial", nullptr));
        LblVely->setText(QApplication::translate("MainWindow", "Velocidad Y inicial", nullptr));
        LblPosx->setText(QApplication::translate("MainWindow", "Posici\303\263n X inicial", nullptr));
        LblPosy->setText(QApplication::translate("MainWindow", "Posici\303\263n Y inicial", nullptr));
        LblCant->setText(QApplication::translate("MainWindow", "Cantidad de cuerpos", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Nombre del archivo", nullptr));
        LineArchivo->setText(QApplication::translate("MainWindow", "Data.txt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
