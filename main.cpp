#include "devicemanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DeviceManager w;
    w.show();

    return a.exec();
}
