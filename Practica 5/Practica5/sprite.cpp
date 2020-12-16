#include "sprite.h"

Sprite::Sprite()
{
    timer = new QTimer();
    filas = 0;
    columnas = 0;

    pixmap = new QPixmap(":/Images/sprite.png");

    //Dimensiones Pacman
    ancho=100;
    alto=100;

    timer->start(300);
    connect(timer, &QTimer::timeout, this, &Sprite::actualizacion);
}

void Sprite::actualizacion()
{
 columnas +=100;
 if (columnas>=400){
     columnas=0;
 }
 this->update(ancho/2, alto/2, ancho, alto);
}

QRectF Sprite::boundingRect() const
{
    return QRectF(ancho/2, alto/2, ancho, alto);
}

void Sprite::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(ancho/2, alto/2, *pixmap, columnas, 0, ancho, alto);
}
