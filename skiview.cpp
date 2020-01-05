#include "skiview.h"

SkiView::SkiView(QWidget *parent) : QWidget(parent)
{
    connect(timer, SIGNAL(timeout()), this, SLOT(tick()));
    timer->start();
}

void SkiView::tick()
{
    game.tick();
}
