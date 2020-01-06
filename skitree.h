#ifndef SKITREE_H
#define SKITREE_H

#include <QImage>
#include <QObject>

class SkiTree : public QObject
{
    Q_OBJECT
public:
    explicit SkiTree(QObject *parent = nullptr);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    QImage getTreeImage() const;

    int getW() const;

    int getH() const;

private:
    int x;
    int y;
    int w;
    int h;
    QImage treeImage;

signals:

};

#endif // SKITREE_H
