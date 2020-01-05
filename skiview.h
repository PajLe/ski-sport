#ifndef SKIVIEW_H
#define SKIVIEW_H

#include <QTimer>
#include <QWidget>

#include "skigame.h"


class SkiView : public QWidget
{
    Q_OBJECT
public:
    explicit SkiView(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);

private:
    SkiGame game;
    QTimer* timer = new QTimer(this);
    void tick();

signals:

};

#endif // SKIVIEW_H
