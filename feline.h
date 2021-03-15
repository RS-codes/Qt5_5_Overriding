#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>

class Feline : public QObject
{
    Q_OBJECT
public:
    explicit Feline(QObject *parent = 0);

    //adding a method
    void speak();

signals:

public slots:
};

#endif // FELINE_H
