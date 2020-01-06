#include "skitree.h"

SkiTree::SkiTree(QObject *parent) : QObject(parent)
{
    treeImage = QImage(":/IMAGES/tree.png");
    w = treeImage.width();
    h = treeImage.height();
}

QImage SkiTree::getTreeImage() const
{
    return treeImage;
}

int SkiTree::getW() const
{
    return w;
}

int SkiTree::getH() const
{
    return h;
}

int SkiTree::getX() const
{
    return x;
}

int SkiTree::getY() const
{
    return y;
}

void SkiTree::setY(int value)
{
    y = value;
}

void SkiTree::setX(int value)
{
    x = value;
}
