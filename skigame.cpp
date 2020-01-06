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
    moveSanta(0);
}

void SkiGame::moveSanta(int dx)
{
    if (dx == 0) {
        santa.setStanje(Stanje::Pravo);
        santa.setSantaImage("santa");
        return;
    }
    else if (dx < 0) {
        santa.setStanje(Stanje::Levo);
        santa.setSantaImage("santa-left");
    }
    else {
        santa.setStanje(Stanje::Desno);
        santa.setSantaImage("santa-right");
    }

    int move = santa.getX() + dx;
    if (move > 0 && move < clientWidth - santa.getW())
        santa.setX(move);
}

void SkiGame::draw(QPainter *p)
{
    p->drawImage(santa.getX(), santa.getY(), santa.getSantaImage());

    for (int i = 0; i < 5; i++)
        p->drawImage(skiTrees[i].getX(), skiTrees[i].getY(), skiTrees[i].getTreeImage());
}

void SkiGame::init()
{
    for (int i = 0; i < 5; i++) {
        skiTrees[i].setX(qrand() % (clientWidth - skiTrees[i].getW()));
        skiTrees[i].setY((qrand() % clientHeight) + clientHeight);
    }
    santa.setX(clientWidth / 2);
}
