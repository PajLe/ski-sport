#ifndef SKITREE_H
#define SKITREE_H

#include <QObject>

class SkiTree : public QObject
{
    Q_OBJECT
public:
    explicit SkiTree(QObject *parent = nullptr);

private:
    int x;
    int y;
    int w;
    int h;
    QImage* treeImage;

signals:

};

#endif // SKITREE_H
