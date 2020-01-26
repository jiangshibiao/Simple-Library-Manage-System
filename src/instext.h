#ifndef INSTEXT_H
#define INSTEXT_H

#include "record.h"

namespace Ui {
class InsText;
}

class InsText : public QDialog
{
    Q_OBJECT

public:
    explicit InsText(QWidget *parent = 0);
    ~InsText();

private slots:
    void on_pushButton_clicked();

private:
    Ui::InsText *ui;
};

#endif // INSTEXT_H
