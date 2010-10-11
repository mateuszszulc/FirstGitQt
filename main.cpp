#include <QtGui/QApplication>
#include "widget.h"

int main(int argc, char *argv[])
{
    //komentarz w galezi dupa.
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
