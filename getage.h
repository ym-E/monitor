#ifndef GETAGE_H
#define GETAGE_H

#include <QObject>

class GetAge : public QObject
{
    Q_OBJECT
public:
    explicit GetAge(QObject *parent = nullptr);

signals:

};

#endif // GETAGE_H
