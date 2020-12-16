#ifndef SPRITE_H
#define SPRITE_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class Sprite : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit Sprite(QObject *parent = nullptr);

    QTimer *timer;
    QPixmap *pixmap;

    float filas, columnas;
    float ancho, alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:

public slots:
    void actualizacion();
};

#endif // SPRITE_H
