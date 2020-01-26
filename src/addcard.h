#ifndef ADDCARD_H
#define ADDCARD_H

#include "record.h"

namespace Ui {
class AddCard;
}

class AddCard : public QDialog
{
    Q_OBJECT

public:
    explicit AddCard(bool isadmin, QWidget *parent = nullptr);
    ~AddCard();
      bool isadmin;

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddCard *ui;
};

#endif // ADDCARD_H
