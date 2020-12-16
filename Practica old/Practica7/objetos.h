#ifndef OBJETOS_H
#define OBJETOS_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>

class Objetos : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    Objetos(QString name);
    int width, heigth, size1=50, size2=50, velocidad=5;
    void up();
    void down();
    void left();
    void right();

};

#endif // OBJETOS_H
