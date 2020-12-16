#include "objetos.h"

Objetos::Objetos(QString name)
{
    setPixmap(QPixmap(name).scaled(size1,size2));
}

void Objetos::up()
{

}

void Objetos::down()
{

}

void Objetos::left()
{

}

void Objetos::right()
{

}
