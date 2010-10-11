#include <QtGui/QApplication>
#include "widget.h"

int main(int argc, char *argv[])
{
    //dodaje zarombisty komentarz
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
