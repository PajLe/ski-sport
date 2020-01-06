#include "skigame.h"
#include "skitree.h"



SkiGame::SkiGame(QObject *parent) : QObject(parent)
{
    this->clientWidth = 500;
    this->clientHeight = 600;

    init();
}

void SkiGame::tick()
{
    for (int i = 0; i < 5; i++) {
        int move = skiTrees[i].getY() - 20;
        if (move > -skiTrees[i].getH())
            skiTrees[i].setY(move);
        else {
            skiTrees[i].setY(clientHeight);
            skiTrees[i].setX(qrand() % (clientWidth - skiTrees[i].getW()));
        }
    }
}

void SkiGame::moveSanta(int dx)
{
    int move = santa.getX() + dx;
    if (move > 0 && move < clientWidth - santa.getW())
        santa.setX(move);
}

void SkiGame::draw(QPainter *p)
{

    for (int i = 0; i < 5; i++) {
        p->drawImage(skiTrees[i].getX(), skiTrees[i].getY(), skiTrees[i].getTreeImage());
    }

    p->drawImage(santa.getX(), santa.getY(), santa.getSantaImage());
}

void SkiGame::init()
{
    for (int i = 0; i < 5; i++) {
        skiTrees[i].setX(qrand() % (clientWidth - skiTrees[i].getW()));
        skiTrees[i].setY((qrand() % clientHeight) + clientHeight);
    }
    santa.setX(clientWidth / 2);
}
