#include "delcard.h"
#include "ui_delcard.h"

DelCard::DelCard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelCard)
{
    ui->setupUi(this);
}

DelCard::~DelCard()
{
    delete ui;
}

void DelCard::on_pushButton_clicked()
{
    if (ui->idEdit->text().isEmpty())
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("您的信息填写不完整"), QMessageBox::Yes);
    else
    {
        QSqlQuery query;
        query.exec("select * from cuser where name = '" + ui->idEdit->text() + "'");
        if (!query.next())
        {
            QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("没有此借书卡"), QMessageBox::Yes);
        }
        else
        {
            query.exec("select * from note where cardnum = '" + ui->idEdit->text() + "' and return = '" + QString::fromLocal8Bit("尚未归还") + "'");
            if(query.next())
            {
                QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("此借书卡尚有图书未归还"), QMessageBox::Yes);
            }
            else
            {
                bool ok =query.exec("delete from cuser where name = '" + ui->idEdit->text() + "'");
                if(!ok)
                {
                    QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("删除失败"), QMessageBox::Yes);
                }
                else
                {
                    query.exec("delete from note where cardnum = '" + ui->idEdit->text() + "'");
                    QMessageBox::information(nullptr, "Success", QString::fromLocal8Bit("删除成功！借书记录也已清除！"), QMessageBox::Yes);
                    accept();
                }
            }
        }

    }
}
