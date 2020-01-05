#ifndef SKITREE_H
#define SKITREE_H

#include <QObject>

class SkiTree : public QObject
{
    Q_OBJECT
public:
    explicit SkiTree(QObject *parent = nullptr);

private:
    float x;
    float y;
    float w;
    float h;
    QImage* treeImage;

signals:

};

#endif // SKITREE_H
