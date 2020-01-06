#ifndef SKISANTA_H
#define SKISANTA_H

#include <QImage>
#include <QObject>

class SkiSanta : public QObject
{
    Q_OBJECT
public:
    explicit SkiSanta(QObject *parent = nullptr);

    int getX() const;
    void setX(int value);

    int getY() const;

    QImage getSantaImage() const;
    void setSantaImage(const QImage &value);

    int getW() const;

    int getH() const;

private:
    int x;
    int y = 200;
    int w;
    int h;
    QImage santaImage;
    enum Stanje{
        Pravo,
        Levo,
        Desno
    } stanje = Pravo;

signals:

};

#endif // SKISANTA_H
