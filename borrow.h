#ifndef BORROW_H
#define BORROW_H

#include "record.h"

namespace Ui {
class Borrow;
}

class Borrow : public QDialog
{
    Q_OBJECT

public:
    explicit Borrow(QString user_name, QWidget *parent = nullptr);
    ~Borrow();
    QString getName(){return user_name;}
    void Borrow_book(QString book);
private slots:
    void on_pushButton_clicked();

private:
    Ui::Borrow *ui;
    QString user_name;
};

#endif // BORROW_H
