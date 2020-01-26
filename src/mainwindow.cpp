#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    findbook *fb = new findbook();
    fb->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    Login *lgin = new Login(this);

    lgin->show();
    int res = lgin->exec();
    if (res == QDialog::Accepted){
       delete lgin;
    }
}
