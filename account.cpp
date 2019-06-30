#include "account.h"
#include "ui_account.h"

Account::Account(QString user_name, QWidget *parent):
    QDialog(parent),
    ui(new Ui::Account)
{
    ui->setupUi(this);
    ui->label_3->setText(user_name);
    this->user = user_name;
    ui->tableWidget1->setVisible(false);
    ui->label_4->setVisible(false);
    ui->tableWidget2->setVisible(false);
    ui->label_6->setVisible(true);
}

Account::~Account()
{
    delete ui;
}

void Account::on_pushButton_6_clicked()
{
    InsOne *ins = new InsOne(this);
    ins->show();
}

void Account::on_pushButton_7_clicked()
{
    InsText *ins = new InsText(this);
    ins->show();
}


void Account::on_pushButton_3_clicked()
{
    AddCard *ad = new AddCard(0, this);
    ad->show();
}

void Account::on_pushButton_4_clicked()
{
    DelCard *del = new DelCard(this);
    del->show();
}

void Account::on_pushButton_2_clicked()
{
    AddCard *ad = new AddCard(1, this);
    ad->show();
}


void Account::on_pushButton_5_clicked()
{
    ui->tableWidget1->setVisible(true);
    ui->label_4->setVisible(true);
    ui->tableWidget2->setVisible(false);
    ui->label_6->setVisible(false);

    QStringList ts;
    ts<<QString::fromLocal8Bit("账号")<<QString::fromLocal8Bit("密码");
    QString ss = "select * from cuser";

    ui->tableWidget1->setColumnCount(ts.count());
    ui->tableWidget1->setColumnWidth(0, 210);
    ui->tableWidget1->setColumnWidth(1, 210);

    ui->tableWidget1->setHorizontalHeaderLabels(ts);
    ui->tableWidget1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget1->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    ui->tableWidget1->setSelectionMode(QAbstractItemView::SingleSelection); //设置选择模式，选择单行

    QSqlQuery query;
    bool ok = query.exec(ss);

    if(!ok)
    {
        QMessageBox::critical(this, "Error",  QString::fromLocal8Bit("查询失败"), QMessageBox::Yes);
        return;
    }

    int num = 0;
    while (query.next()) num++;

    ui->tableWidget1->clearContents();
    ui->tableWidget1->setRowCount(num);

    query.exec(ss); num = 0;

    while(query.next())
    {
        for(int j=0;j<9;j++)
        {
            QString tmp = query.value(j).toString();
            ui->tableWidget1->setItem(num, j, new QTableWidgetItem(tmp));
        }
        num++;
    }
}

void Account::on_pushButton_8_clicked()
{
    ui->tableWidget1->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_6->setVisible(false);
    ui->tableWidget2->setVisible(true);

    QString ss = "select * from note";

    QStringList ts;
    ts   <<QString::fromLocal8Bit("书名")
         <<QString::fromLocal8Bit("卡号")
         <<QString::fromLocal8Bit("借阅时间")
         <<QString::fromLocal8Bit("归还时间");

    ui->tableWidget2->setColumnCount(ts.count());
    ui->tableWidget2->setColumnWidth(0, 160);
    ui->tableWidget2->setColumnWidth(1, 85);
    ui->tableWidget2->setColumnWidth(2, 235);
    ui->tableWidget2->setColumnWidth(3, 235);

    ui->tableWidget2->setHorizontalHeaderLabels(ts);
    ui->tableWidget2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget2->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    ui->tableWidget2->setSelectionMode(QAbstractItemView::SingleSelection); //设置选择模式，选择单行

    QSqlQuery query;
    bool ok = query.exec(ss);

    if(!ok)
    {
        QMessageBox::critical(this, "Error",  QString::fromLocal8Bit("查询失败"), QMessageBox::Yes);
        return;
    }


    int num = 0;
    while (query.next()) num++;

    ui->tableWidget2->clearContents();
    ui->tableWidget2->setRowCount(num);

    query.exec(ss); num = 0;

    while(query.next())
    {
        for(int j=0;j<9;j++)
        {
            QString tmp = query.value(j).toString();
            ui->tableWidget2->setItem(num, j, new QTableWidgetItem(tmp));
        }
        num++;
    }
}

void Account::on_pushButton_clicked()
{
    findbook *fb = new findbook(this->user, this);
    fb->show();
}
