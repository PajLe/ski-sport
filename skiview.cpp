#include "skiview.h"
#include <QDebug>


SkiView::SkiView(QWidget *parent) : QWidget(parent)
{
    game = new SkiGame(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(tick()));
    timer->start(500);
}

void SkiView::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    game->draw(&p);
}

void SkiView::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()) {
        case Qt::Key_Right:
        case Qt::Key_D:
            game->moveSanta(20);
            repaint();
            break;
        case Qt::Key_Left:
        case Qt::Key_A:
            game->moveSanta(-20);
            repaint();
            break;
        default:
            QWidget::keyPressEvent(event);
    }
}

void SkiView::tick()
{
    game->tick();
    repaint();
}
