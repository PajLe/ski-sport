#ifndef SKIGAME_H
#define SKIGAME_H

#include <QObject>

#include "skitree.h"
#include "skisanta.h"

class SkiGame : public QObject
{
    Q_OBJECT
public:
    explicit SkiGame(QObject *parent = nullptr);
    void tick();
    void moveSanta(int dx);
private:
    SkiTree skiTrees[5];
    SkiSanta santa;

signals:

};

#endif // SKIGAME_H
