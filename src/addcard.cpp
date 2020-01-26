#include "addcard.h"
#include "ui_addcard.h"

AddCard::AddCard(bool isadmin, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCard)
{
    ui->setupUi(this);
    this->isadmin = isadmin;
}

AddCard::~AddCard()
{
    delete ui;
}

void AddCard::on_pushButton_clicked()
{
    if(ui->idEdit->text().isEmpty()||ui->idEdit_2->text().isEmpty())
    {
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("您的信息填写不完整"), QMessageBox::Yes);
    }
    else
    {
        QSqlQuery query, query1, query2;
        query1.exec("select name from cuser where name ='" + ui->idEdit->text() + "'");
        query2.exec("select name from admin where name ='" + ui->idEdit->text() + "'");
        if (query1.next() || query2.next())
           QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("该卡号已经插入"), QMessageBox::Yes);
        else
        {
           bool ok = query.exec((isadmin? "insert into admin values('" : "insert into cuser values('") + ui->idEdit->text() + "','" + ui->idEdit_2->text() + "')");
           if (!ok)
              QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("插入失败"), QMessageBox::Yes);
           else {
             QMessageBox::information(nullptr, "Success", QString::fromLocal8Bit(isadmin?"管理员账号新建成功":"用户卡号新建成功"), QMessageBox::Yes);
             accept();
           }
        }
    }
}
