#ifndef INSONE_H
#define INSONE_H

#include "record.h"

namespace Ui {
class InsOne;
}

class InsOne : public QDialog
{
    Q_OBJECT

public:
    explicit InsOne(QWidget *parent = 0);
    ~InsOne();

private slots:
    void on_insertBtn_clicked();

private:
    Ui::InsOne *ui;
};

#endif // INSONE_H
