#ifndef SKISANTA_H
#define SKISANTA_H

#include <QImage>
#include <QObject>

enum Stanje{
    Pravo,
    Levo,
    Desno
};

class SkiSanta : public QObject
{
    Q_OBJECT
public:
    explicit SkiSanta(QObject *parent = nullptr);

    int getX() const;
    void setX(int value);

    int getY() const;

    QImage getSantaImage() const;
    void setSantaImage(QString imageSrc);

    int getW() const;

    int getH() const;

    Stanje getStanje() const;
    void setStanje(const Stanje& value);

private:
    int x;
    int y = 200;
    int w;
    int h;
    QImage santaImage;
    QString santaImageSrc;
    Stanje stanje;
    ushort idSlike;

signals:

};

#endif // SKISANTA_H
