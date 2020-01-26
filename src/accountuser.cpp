#include "accountuser.h"
#include "ui_accountuser.h"

Accountuser::Accountuser(QString user_name, QWidget *parent):
    QDialog(parent),
    ui(new Ui::Accountuser)
{
    ui->setupUi(this);
    ui->label_3->setText(user_name);
    this->user = user_name;
}

Accountuser::~Accountuser()
{
    delete ui;
}

void Accountuser::on_pushButton_2_clicked()
{
    Borrow *borrow = new Borrow(ui->label_3->text());
    borrow->show();
}

void Accountuser::on_pushButton_clicked()
{
    ReturnBook *rtn = new ReturnBook(ui->label_3->text());
    rtn->show();
}

void Accountuser::Displayrecord(){
    QString ss = "select * from note where cardnum = '" + this->user + "'";

    QStringList ts;
    ts   <<tr("书名")
         <<tr("卡号")
         <<tr("借阅时间")
         <<tr("归还时间");
    //ui->tableWidget->horizontalHeader()->setDefaultSectionSize(160);
    ui->tableWidget->setColumnCount(ts.count());
    ui->tableWidget->setColumnWidth(0, 160);
    ui->tableWidget->setColumnWidth(1, 85);
    ui->tableWidget->setColumnWidth(2, 235);
    ui->tableWidget->setColumnWidth(3, 235);

    ui->tableWidget->setHorizontalHeaderLabels(ts);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection); //设置选择模式，选择单行

    QSqlQuery query;
    bool ok = query.exec(ss);

    if(!ok)
    {
        QMessageBox::critical(this, "Error",  QString::fromLocal8Bit("查询失败"), QMessageBox::Yes);
        return;
    }


    int num = 0;
    while (query.next()) num++;

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(num);

    query.exec(ss); num = 0;

    while(query.next())
    {
        for(int j=0;j<9;j++)
        {
            QString tmp = query.value(j).toString();
            ui->tableWidget->setItem(num, j, new QTableWidgetItem(tmp));
        }
        num++;
    }
    //ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void Accountuser::on_pushButton_3_clicked()
{
    bool focus = ui->tableWidget->isItemSelected(ui->tableWidget->currentItem());
    if (focus == 0){
        QMessageBox::warning(this, QString::fromLocal8Bit("警告!"),
                             QString::fromLocal8Bit("你未选择任何记录!"), QMessageBox::Yes);
        return;
    }
    int id = ui->tableWidget->currentItem()->row();
    QString cur = ui->tableWidget->item(id, 0)->text();
    ReturnBook *returnbook = new ReturnBook(user);
    returnbook->return_book(cur);
}

void Accountuser::on_pushButton_8_clicked()
{
    Displayrecord();
}

void Accountuser::on_pushButton_4_clicked()
{
     Displayrecord();
}

void Accountuser::on_pushButton_9_clicked()
{
    findbook *fb = new findbook(this->user, this);
    fb->show();
}
