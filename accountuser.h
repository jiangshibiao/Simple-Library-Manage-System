#ifndef ACCOUNTUSER_H
#define ACCOUNTUSER_H

#include <QDialog>
#include <QStringList>
#include <QMessageBox>
#include "record.h"
#include "insone.h"
#include "addcard.h"
#include "delcard.h"
#include "instext.h"
#include "findbook.h"
#include "returnbook.h"

namespace Ui {
class Accountuser;
}

class Accountuser : public QDialog
{
    Q_OBJECT

public:
    explicit Accountuser(QString user_name, QWidget *parent = nullptr);
    ~Accountuser();
    void Displayrecord();
    QString user;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::Accountuser *ui;

};

#endif // ACCOUNTUSER_H
