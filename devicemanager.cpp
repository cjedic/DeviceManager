#include "devicemanager.h"
#include "ui_devicemanager.h"

DeviceManager::DeviceManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeviceManager)
{
    ui->setupUi(this);
}

DeviceManager::~DeviceManager()
{
    delete ui;
}
