#include "skisanta.h"

SkiSanta::SkiSanta(QObject *parent) : QObject(parent)
{
    santaImageSrc = "santa";
    stanje = Stanje::Pravo;
    idSlike = 1;
    santaImage = QImage(":/IMAGES/" + santaImageSrc + QString::number(idSlike) + ".png");

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

void SkiSanta::setSantaImage(QString imageSrc)
{
    santaImageSrc = imageSrc;
    santaImage = QImage(":/IMAGES/" + santaImageSrc + QString::number(idSlike) + ".png");
}

int SkiSanta::getW() const
{
    return w;
}

int SkiSanta::getH() const
{
    return h;
}

Stanje SkiSanta::getStanje() const
{
    return stanje;
}

void SkiSanta::setStanje(const Stanje& value)
{
    stanje = value;
    (idSlike == 1)? idSlike = 2 : idSlike = 1;
}

void SkiSanta::setX(int value)
{
    x = value;
}
