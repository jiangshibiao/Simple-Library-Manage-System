#include "returnbook.h"
#include "ui_returnbook.h"

ReturnBook::ReturnBook(QString user_name, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnBook)
{
    ui->setupUi(this);
    this->user_name = user_name;
}

ReturnBook::~ReturnBook()
{
    delete ui;
}


void ReturnBook::return_book(QString book){
    QSqlQuery query;
    query.exec("select * from note where booknum = '" + book + "' and cardnum = '" +
               this->getName() + "' and return = '" + QString::fromLocal8Bit("尚未归还") + "'" );
    if(!query.next())
    {
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("您没有借此书"),
                                      QMessageBox::Yes);
    }
    else
    {
        QString borrowtime=query.value(2).toString();
        QDateTime time = QDateTime::currentDateTime();
        QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd");
        bool ok = query.exec("update book set leftnumber = leftnumber + 1 where name = '" + book +"'");
        ok &= query.exec("update note set return = '" + str +"' where borrow ='" + borrowtime + "'");
        if (!ok)
            QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("还书失败"), QMessageBox::Yes);
        else
        {
            QMessageBox::information(nullptr, "Success", QString::fromLocal8Bit("还书成功"), QMessageBox::Yes);
            accept();
        }
    }
}
void ReturnBook::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("请填写书名"), QMessageBox::Yes);
    }
    else
        return_book(ui->lineEdit->text());
}
