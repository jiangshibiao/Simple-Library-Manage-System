#include "insone.h"
#include "ui_insone.h"

InsOne::InsOne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InsOne)
{
    ui->setupUi(this);
}

InsOne::~InsOne()
{
    delete ui;
}

void InsOne::on_insertBtn_clicked()
{
    if(ui->idEdit->text().isEmpty()||ui->classEdit->text().isEmpty()||ui->companyEdit->text().isEmpty()||ui->nameEdit->text().isEmpty()
            ||ui->numberEdit->text().isEmpty()||ui->priceEdit->text().isEmpty()||ui->writerEdit->text().isEmpty()||ui->yearEdit->text().isEmpty())
    {
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("您的信息填写不完整"), QMessageBox::Yes);
    }
    else
    {
        QString bookMessage[8];
        bookMessage[0]=ui->idEdit->text();
        bookMessage[1]=ui->classEdit->text();
        bookMessage[2]=ui->nameEdit->text();
        bookMessage[3]=ui->companyEdit->text();
        bookMessage[4]=ui->yearEdit->text();
        bookMessage[5]=ui->writerEdit->text();
        bookMessage[6]=ui->priceEdit->text();
        bookMessage[7]=ui->numberEdit->text();
        BookInfo bookInfo(bookMessage);
        QSqlQuery query;
        query.exec("select id from book where id ='"+bookMessage[0]+"'");

        bool ok;
        if(query.next())
        {
            ok = query.exec("update book set number = number + " + bookInfo.number
                   + " where id = '" + bookInfo.id +"'");
                query.exec("update book set leftnumber = leftnumber + " + bookInfo.number
                                       + " where id = '" + bookInfo.id +"'");
        }
         else
        {
             ok = query.exec("insert into book values('" + bookInfo.id + "','" + bookInfo.className + "','" + bookInfo.name + "','" + bookInfo.company
                             + "'," + bookInfo.year + ",'" + bookInfo.writer + "'," + bookInfo.price + "," + bookInfo.number + "," + bookInfo.number + ")");
        }
        if(!ok)
        {
           QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("插入失败"), QMessageBox::Yes);
        }
        else
        {
             QMessageBox::information(nullptr, "Success", QString::fromLocal8Bit("插入成功"), QMessageBox::Yes);
             accept();
         }
    }
}
