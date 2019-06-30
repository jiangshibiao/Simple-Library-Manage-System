#include "borrow.h"
#include "ui_borrow.h"

Borrow::Borrow(QString user_name, QWidget *parent) :
    QDialog(parent), ui(new Ui::Borrow)
{
    ui->setupUi(this);
    this->user_name = user_name;
}

Borrow::~Borrow()
{
    delete ui;
}

void Borrow::Borrow_book(QString book){
    QSqlQuery query;
    query.exec("select leftnumber from book where name = '" + book + "'");
    if(!query.next())
    {
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("没有此书"), QMessageBox::Yes);
    }
    else if(query.value(0)==0)
    {
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("书籍已借完"), QMessageBox::Yes);
    }
    else
    {
        QDateTime time = QDateTime::currentDateTime();
        QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd");
        QString bookMessage[4];
        bookMessage[0]=book;
        bookMessage[1]=user_name;
        bookMessage[2]=str;
        bookMessage[3]=QString::fromLocal8Bit("尚未归还");
        bool ok = query.exec("update book set leftnumber = leftnumber - 1 where name = '" + book + "'");
        ok &= query.exec("insert into note values('" + bookMessage[0] + "','" + bookMessage[1] + "','" + bookMessage[2] + "','" + bookMessage[3] + "')");
        if(!ok)
        {
            QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("借书失败"), QMessageBox::Yes);
        }
        else
        {
            QMessageBox::information(nullptr, "Success", QString::fromLocal8Bit("借书成功"), QMessageBox::Yes);
            accept();
        }
    }
}

void Borrow::on_pushButton_clicked()
{

    if(ui->lineEdit->text().isEmpty())
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("您的信息填写不完整"), QMessageBox::Yes);
    else
        Borrow_book(ui->lineEdit->text());
}
