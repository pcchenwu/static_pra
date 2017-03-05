#ifndef DATE_H
#define DATE_H

#include <QObject>

class Date : public QObject
{
    Q_OBJECT
    static Date default_date;
public:
    explicit Date(int dd=0, int mm=0, int yy=0, QObject *parent = 0);

    static void set_default(int d, int m, int y);

    void print();
private:
    int d, m, y;

signals:

public slots:
};


#endif // DATE_H
