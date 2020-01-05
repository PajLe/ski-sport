#ifndef SKISANTA_H
#define SKISANTA_H

#include <QImage>
#include <QObject>

class SkiSanta : public QObject
{
    Q_OBJECT
public:
    explicit SkiSanta(QObject *parent = nullptr);

private:
    int x;
    int y;
    int w;
    int h;
    QImage santaImage;
    enum Stanje{
        Pravo,
        Levo,
        Desno
    } Stanje;

signals:

};

#endif // SKISANTA_H
