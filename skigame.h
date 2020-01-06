#ifndef SKIGAME_H
#define SKIGAME_H

#define TREE_COUNT 10

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
    SkiTree skiTrees[TREE_COUNT];
    SkiSanta santa;
    int clientWidth;
    int clientHeight;

    void init();
signals:

};

#endif // SKIGAME_H
