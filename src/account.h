#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QDialog>
#include <QStringList>
#include "record.h"
#include "insone.h"
#include "addcard.h"
#include "delcard.h"
#include "instext.h"
#include "findbook.h"

namespace Ui {
class Account;
}

class Account : public QDialog
{
    Q_OBJECT

public:
    explicit Account(QString user_name, QWidget *parent = nullptr);
    ~Account();
    QString user;

private slots:

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::Account *ui;
};

#endif // ACCOUNT_H
