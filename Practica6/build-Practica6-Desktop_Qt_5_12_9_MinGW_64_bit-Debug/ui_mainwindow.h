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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
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
    QWidget *layoutWidget;
    QHBoxLayout *Botones2;
    QPushButton *BtnStart;
    QPushButton *BtnStop;
    QGraphicsView *GvSimulador;
    QPushButton *BtnAceptar;
    QWidget *layoutWidget1;
    QVBoxLayout *Nombres;
    QLabel *LblNombre;
    QLabel *LblMasa;
    QLabel *LblRadio;
    QLabel *LblVelx;
    QLabel *LblVely;
    QLabel *LblPosx;
    QLabel *LblPosy;
    QWidget *layoutWidget2;
    QVBoxLayout *Datos;
    QLineEdit *LineNombre;
    QDoubleSpinBox *SboxMasa;
    QDoubleSpinBox *SboxRadio;
    QDoubleSpinBox *SboxVelx;
    QDoubleSpinBox *SboxVely;
    QDoubleSpinBox *SboxPosx;
    QDoubleSpinBox *SboxPosy;
    QWidget *layoutWidget3;
    QFormLayout *Cuerpos;
    QLabel *LblCant;
    QSpinBox *SboxCant;
    QWidget *layoutWidget4;
    QHBoxLayout *Botones1;
    QPushButton *BtnAdd;
    QPushButton *BtnClean;
    QLabel *label;
    QPushButton *BtnFinish;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(959, 585);
        MainWindow->setMinimumSize(QSize(959, 585));
        MainWindow->setMaximumSize(QSize(1000, 585));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 19, 161, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 39, 161, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 309, 158, 25));
        Botones2 = new QHBoxLayout(layoutWidget);
        Botones2->setObjectName(QString::fromUtf8("Botones2"));
        Botones2->setContentsMargins(0, 0, 0, 0);
        BtnStart = new QPushButton(layoutWidget);
        BtnStart->setObjectName(QString::fromUtf8("BtnStart"));

        Botones2->addWidget(BtnStart);

        BtnStop = new QPushButton(layoutWidget);
        BtnStop->setObjectName(QString::fromUtf8("BtnStop"));

        Botones2->addWidget(BtnStop);

        GvSimulador = new QGraphicsView(centralwidget);
        GvSimulador->setObjectName(QString::fromUtf8("GvSimulador"));
        GvSimulador->setGeometry(QRect(270, 10, 681, 561));
        BtnAceptar = new QPushButton(centralwidget);
        BtnAceptar->setObjectName(QString::fromUtf8("BtnAceptar"));
        BtnAceptar->setGeometry(QRect(180, 70, 75, 23));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 99, 84, 181));
        Nombres = new QVBoxLayout(layoutWidget1);
        Nombres->setObjectName(QString::fromUtf8("Nombres"));
        Nombres->setContentsMargins(0, 0, 0, 0);
        LblNombre = new QLabel(layoutWidget1);
        LblNombre->setObjectName(QString::fromUtf8("LblNombre"));

        Nombres->addWidget(LblNombre);

        LblMasa = new QLabel(layoutWidget1);
        LblMasa->setObjectName(QString::fromUtf8("LblMasa"));

        Nombres->addWidget(LblMasa);

        LblRadio = new QLabel(layoutWidget1);
        LblRadio->setObjectName(QString::fromUtf8("LblRadio"));

        Nombres->addWidget(LblRadio);

        LblVelx = new QLabel(layoutWidget1);
        LblVelx->setObjectName(QString::fromUtf8("LblVelx"));

        Nombres->addWidget(LblVelx);

        LblVely = new QLabel(layoutWidget1);
        LblVely->setObjectName(QString::fromUtf8("LblVely"));

        Nombres->addWidget(LblVely);

        LblPosx = new QLabel(layoutWidget1);
        LblPosx->setObjectName(QString::fromUtf8("LblPosx"));

        Nombres->addWidget(LblPosx);

        LblPosy = new QLabel(layoutWidget1);
        LblPosy->setObjectName(QString::fromUtf8("LblPosy"));

        Nombres->addWidget(LblPosy);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 99, 135, 178));
        Datos = new QVBoxLayout(layoutWidget2);
        Datos->setObjectName(QString::fromUtf8("Datos"));
        Datos->setContentsMargins(0, 0, 0, 0);
        LineNombre = new QLineEdit(layoutWidget2);
        LineNombre->setObjectName(QString::fromUtf8("LineNombre"));

        Datos->addWidget(LineNombre);

        SboxMasa = new QDoubleSpinBox(layoutWidget2);
        SboxMasa->setObjectName(QString::fromUtf8("SboxMasa"));
        SboxMasa->setMinimum(-9999999.000000000000000);
        SboxMasa->setMaximum(999999.989999999990687);

        Datos->addWidget(SboxMasa);

        SboxRadio = new QDoubleSpinBox(layoutWidget2);
        SboxRadio->setObjectName(QString::fromUtf8("SboxRadio"));
        SboxRadio->setMaximum(9999999.990000000223517);

        Datos->addWidget(SboxRadio);

        SboxVelx = new QDoubleSpinBox(layoutWidget2);
        SboxVelx->setObjectName(QString::fromUtf8("SboxVelx"));
        SboxVelx->setMinimum(-9999999.000000000000000);
        SboxVelx->setMaximum(9999999.990000000223517);

        Datos->addWidget(SboxVelx);

        SboxVely = new QDoubleSpinBox(layoutWidget2);
        SboxVely->setObjectName(QString::fromUtf8("SboxVely"));
        SboxVely->setMinimum(-9999999.000000000000000);
        SboxVely->setMaximum(99999999.989999994635582);

        Datos->addWidget(SboxVely);

        SboxPosx = new QDoubleSpinBox(layoutWidget2);
        SboxPosx->setObjectName(QString::fromUtf8("SboxPosx"));
        SboxPosx->setMinimum(-99999999.000000000000000);
        SboxPosx->setMaximum(999999999.990000009536743);

        Datos->addWidget(SboxPosx);

        SboxPosy = new QDoubleSpinBox(layoutWidget2);
        SboxPosy->setObjectName(QString::fromUtf8("SboxPosy"));
        SboxPosy->setMinimum(-99999999.000000000000000);
        SboxPosy->setMaximum(999999999.990000009536743);

        Datos->addWidget(SboxPosy);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(31, 70, 140, 22));
        Cuerpos = new QFormLayout(layoutWidget3);
        Cuerpos->setObjectName(QString::fromUtf8("Cuerpos"));
        Cuerpos->setContentsMargins(0, 0, 0, 0);
        LblCant = new QLabel(layoutWidget3);
        LblCant->setObjectName(QString::fromUtf8("LblCant"));

        Cuerpos->setWidget(0, QFormLayout::LabelRole, LblCant);

        SboxCant = new QSpinBox(layoutWidget3);
        SboxCant->setObjectName(QString::fromUtf8("SboxCant"));
        SboxCant->setMinimum(1);

        Cuerpos->setWidget(0, QFormLayout::FieldRole, SboxCant);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 279, 158, 25));
        Botones1 = new QHBoxLayout(layoutWidget4);
        Botones1->setObjectName(QString::fromUtf8("Botones1"));
        Botones1->setContentsMargins(0, 0, 0, 0);
        BtnAdd = new QPushButton(layoutWidget4);
        BtnAdd->setObjectName(QString::fromUtf8("BtnAdd"));

        Botones1->addWidget(BtnAdd);

        BtnClean = new QPushButton(layoutWidget4);
        BtnClean->setObjectName(QString::fromUtf8("BtnClean"));

        Botones1->addWidget(BtnClean);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 340, 271, 231));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/Inicio.jpg")));
        label->setScaledContents(true);
        BtnFinish = new QPushButton(centralwidget);
        BtnFinish->setObjectName(QString::fromUtf8("BtnFinish"));
        BtnFinish->setGeometry(QRect(190, 282, 75, 51));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "PRACTICA #6", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "INGRESAR CUERPOS", nullptr));
        BtnStart->setText(QApplication::translate("MainWindow", "Iniciar", nullptr));
        BtnStop->setText(QApplication::translate("MainWindow", "Detener", nullptr));
        BtnAceptar->setText(QApplication::translate("MainWindow", "Aceptar", nullptr));
        LblNombre->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        LblMasa->setText(QApplication::translate("MainWindow", "Masa", nullptr));
        LblRadio->setText(QApplication::translate("MainWindow", "Radio", nullptr));
        LblVelx->setText(QApplication::translate("MainWindow", "Velocidad X inicial", nullptr));
        LblVely->setText(QApplication::translate("MainWindow", "Velocidad Y inicial", nullptr));
        LblPosx->setText(QApplication::translate("MainWindow", "Posici\303\263n X inicial", nullptr));
        LblPosy->setText(QApplication::translate("MainWindow", "Posici\303\263n Y inicial", nullptr));
        LblCant->setText(QApplication::translate("MainWindow", "Cantidad de cuerpos", nullptr));
        BtnAdd->setText(QApplication::translate("MainWindow", "Ingresar", nullptr));
        BtnClean->setText(QApplication::translate("MainWindow", "Limpiar", nullptr));
        label->setText(QString());
        BtnFinish->setText(QApplication::translate("MainWindow", "Finalizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
