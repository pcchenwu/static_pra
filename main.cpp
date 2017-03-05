#include "mainwindow.h"
#include <QApplication>

#include "date.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Date date;
    date.print();
    Date::set_default(3,5,2017);

    Date new_date;
    new_date.print();

    MainWindow w;
    w.show();

    return a.exec();
}
