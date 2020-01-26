#ifndef DELCARD_H
#define DELCARD_H

#include <QDialog>
#include <QStringList>

#include "record.h"

namespace Ui {
class DelCard;
}

class DelCard : public QDialog
{
    Q_OBJECT

public:
    explicit DelCard(QWidget *parent = 0);
    ~DelCard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DelCard *ui;
};

#endif // DELCARD_H
