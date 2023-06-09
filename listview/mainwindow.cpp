
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DebugLogger* debugLogger = new DebugLogger(this);
    connect(debugLogger, &DebugLogger::logAdded, [=]() {
        ui->listView->setModel(debugLogger->model());
    });




}
MainWindow::~MainWindow()
{
    delete ui;
}
