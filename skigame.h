#ifndef SKIGAME_H
#define SKIGAME_H

#include <QObject>
#include <QPainter>

#include "skitree.h"
#include "skisanta.h"

class SkiGame : public QObject
{
    Q_OBJECT
public:
    explicit SkiGame(QObject *parent = nullptr);

    void tick();
    void moveSanta(int dx);
    void draw(QPainter* p);
private:
    SkiTree skiTrees[5];
    SkiSanta santa;
    int clientWidth;
    int clientHeight;

    void init();
signals:

};

#endif // SKIGAME_H
