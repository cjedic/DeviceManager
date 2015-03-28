#ifndef DEVICEMANAGER_H
#define DEVICEMANAGER_H

#include <QMainWindow>

namespace Ui {
class DeviceManager;
}

class DeviceManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeviceManager(QWidget *parent = 0);
    ~DeviceManager();

private:
    Ui::DeviceManager *ui;
};

#endif // DEVICEMANAGER_H
