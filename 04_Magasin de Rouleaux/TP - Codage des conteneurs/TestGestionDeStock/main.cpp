#include "stock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    stock w;
    w.show();

    return a.exec();
}
