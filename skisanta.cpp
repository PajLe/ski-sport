#include "skisanta.h"

SkiSanta::SkiSanta(QObject *parent) : QObject(parent)
{
    santaImage = QImage(":/IMAGES/santa1.png");
    w = santaImage.width();
    h = santaImage.height();
}

int SkiSanta::getX() const
{
    return x;
}

int SkiSanta::getY() const
{
    return y;
}

QImage SkiSanta::getSantaImage() const
{
    return santaImage;
}

void SkiSanta::setSantaImage(const QImage &value)
{
    santaImage = value;
}

int SkiSanta::getW() const
{
    return w;
}

int SkiSanta::getH() const
{
    return h;
}

void SkiSanta::setX(int value)
{
    x = value;
}
