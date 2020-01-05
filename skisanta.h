#ifndef SKISANTA_H
#define SKISANTA_H

#include <QObject>

class SkiSanta : public QObject
{
    Q_OBJECT
public:
    explicit SkiSanta(QObject *parent = nullptr);

private:
    float x;
    float y;
    float w;
    float h;
    QImage* santaImage;
    enum Stanje{
        Pravo,
        Levo,
        Desno
    } Stanje;

signals:

};

#endif // SKISANTA_H
