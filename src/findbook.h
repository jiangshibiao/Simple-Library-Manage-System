#ifndef FINDBOOK_H
#define FINDBOOK_H

#include <QWidget>
#include <QSqlQuery>
#include <QMainWindow>
#include "record.h"
#include "borrow.h"
#include "returnbook.h"

namespace Ui {
class findbook;
}

class findbook : public QDialog
{
    Q_OBJECT

public:
    explicit findbook(QString user = nullptr, QWidget *parent = nullptr);
    int work(QString ss, QWidget *parent = nullptr);
    ~findbook();
    Ui::findbook *ui;
    QWidget *myparent;
    QString user_name;
    void Displaybook();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // FINDBOOK_H
