#ifndef SKIVIEW_H
#define SKIVIEW_H

#include <QTimer>
#include <QWidget>
#include <QKeyEvent>

#include "skigame.h"


class SkiView : public QWidget
{
    Q_OBJECT
public:
    explicit SkiView(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;

private:
    SkiGame* game;
    QTimer* timer;

public slots:
    void tick();

signals:

};

#endif // SKIVIEW_H
