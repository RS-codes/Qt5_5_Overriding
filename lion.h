#ifndef LION_H
#define LION_H

#include "feline.h" //including Feline class

#include <QObject>

class lion : public Feline  //replace QObject with Feline
{
    Q_OBJECT
public:
    explicit lion(QObject *parent = 0);
    void speak();
signals:

public slots:
};

#endif // LION_H
