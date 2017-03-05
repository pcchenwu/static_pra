#include "date.h"
#include <QDebug>

Date Date::default_date(8,8,1988);



Date::Date(int dd, int mm, int yy, QObject *parent) : QObject(parent)
{
    d = dd? dd: default_date.d;
    m = mm? mm: default_date.m;
    y = yy? yy: default_date.y;
}

void Date::set_default(int d, int m, int y)
{
    default_date.d = d;
    default_date.m = m;
    default_date.y = y;
}

void Date::print()
{
    qDebug()<<"d"<<d<<".m"<<m<<".y"<<y;
}
