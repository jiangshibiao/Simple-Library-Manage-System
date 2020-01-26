#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include "record.h"


namespace Ui {
class ReturnBook;
}

class ReturnBook : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnBook(QString user_name, QWidget *parent = nullptr);
    void return_book(QString book);
    ~ReturnBook();

private slots:
    void on_pushButton_clicked();
    QString getName(){return user_name;}

private:
    Ui::ReturnBook *ui;
    QString user_name;
};

#endif // RETURNBOOK_H
