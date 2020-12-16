#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::timer()
{
    Pacman->setX(Pacman->x()+Pacman->velocidad);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left || event->key()==Qt::Key_A){
        if(Pacman->x()>=5) Pacman->setX(Pacman->x()-Pacman->velocidad);
    }
    else if(event->key()==Qt::Key_Up || event->key()==Qt::Key_W){
        if(Pacman->y()>=5)Pacman->setY(Pacman->y()-Pacman->velocidad);
    }
    else if(event->key()==Qt::Key_Down || event->key()==Qt::Key_S){
        Pacman->setY(Pacman->y()+Pacman->velocidad);
    }
    else if(event->key()==Qt::Key_Right || event->key()==Qt::Key_D){
        Pacman->setX(Pacman->x()+Pacman->velocidad);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("PACMAN");
    setCentralWidget(ui->Zona);

    escena= new QGraphicsScene;
    Pacman = new Objetos(":/ImPacman/Images/right1.png");
    time = new QTimer;

    connect(time,SIGNAL(timeout()),this,SLOT(timer()));
    escena->setSceneRect(0,0,ui->Zona->width()-10,ui->Zona->height()-10);
    ui->Zona->setScene(escena);
    Pacman->setPos(0,0);
    escena->addItem(Pacman);
    time->start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete escena;
    delete Pacman;
    delete time;
}
