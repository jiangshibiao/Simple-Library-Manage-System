#include "findbook.h"
#include "ui_findbook.h"

findbook::findbook(QString user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::findbook)
{
    ui->setupUi(this);
    setAutoFillBackground(true);
    QStringList ts;
    ts   <<QString::fromLocal8Bit("书号")
         <<QString::fromLocal8Bit("类别")
         <<QString::fromLocal8Bit("书名")
         <<QString::fromLocal8Bit("出版社")
         <<QString::fromLocal8Bit("年份")
         <<QString::fromLocal8Bit("作者")
         <<QString::fromLocal8Bit("价格")
         <<QString::fromLocal8Bit("书量")
         <<QString::fromLocal8Bit("库存");
    this->myparent = parent;
    this->user_name = user;
    ui->tableWidget->setColumnCount(ts.count());
    ui->tableWidget->setColumnWidth(0, 70);
    ui->tableWidget->setColumnWidth(1, 100);
    ui->tableWidget->setColumnWidth(2, 200);
    ui->tableWidget->setColumnWidth(3, 200);
    ui->tableWidget->setColumnWidth(4, 70);
    ui->tableWidget->setColumnWidth(5, 100);
    ui->tableWidget->setColumnWidth(6, 100);
    ui->tableWidget->setColumnWidth(7, 70);
    ui->tableWidget->setColumnWidth(8, 70);

    ui->tableWidget->setHorizontalHeaderLabels(ts);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择行为，以行为单位
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection); //设置选择模式，选择单行
}

findbook::~findbook()
{
    delete ui;
}

int findbook::work(QString ss, QWidget *parent){

    QSqlQuery query;
    bool ok = query.exec(ss);
    ui->tableWidget->clearContents();
    if(!ok)
    {
        QMessageBox::critical(this, "Error",  QString::fromLocal8Bit("查询失败"), QMessageBox::Yes);
        return 0;
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
            ui->tableWidget->setItem(num,j,new QTableWidgetItem(tmp));
        }
        num++;
    }
    //ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    return 1;
}

void findbook::Displaybook(){
    int id = ui->comboBox->currentIndex();
    switch (id){
        case 0:
            QMessageBox::warning(this, QString::fromLocal8Bit("警告！"),
                                 QString::fromLocal8Bit("请选择查询方式！"), QMessageBox::Yes);
            break;
        case 1:
            work("select * from book", this);
            break;
        case 2:{
            QString str = ui->lineEdit->text();
            work("select * from book where class = '" + str + "'", this);
            break;
        }
        case 3:{
            QString str = ui->lineEdit->text();
            work("select * from book where name like '%" + str + "%'", this);
            break;
        }
        case 4:{
            QString str = ui->lineEdit->text();
            work("select * from book where company = '" + str + "'", this);
            break;
        }
        case 5:{
            QString str = ui->lineEdit->text();
            work("select * from book where year = '" + str + "'", this);
            break;
        }
        case 6:{
            QString str = ui->lineEdit->text();
            work("select * from book where writer = '" + str + "'", this);
            break;
        }
        case 7:{
            QString str = ui->lineEdit->text();
            work("select * from book where price = '" + str + "'", this);
            break;
        }
    }
}

void findbook::on_pushButton_2_clicked()
{
    bool focus = ui->tableWidget->isItemSelected(ui->tableWidget->currentItem());
    if (focus == 0){
        QMessageBox::warning(this, QString::fromLocal8Bit("警告！"),
                             QString::fromLocal8Bit("你未选择任何书籍！"), QMessageBox::Yes);
        return;
    }
    int id = ui->tableWidget->currentItem()->row();
    if (this->myparent == nullptr){
        QMessageBox::warning(this, QString::fromLocal8Bit("警告！"),
                             QString::fromLocal8Bit("你还未登陆，请先登陆！"), QMessageBox::Yes);
        return;
    }
    QSqlQuery query;
    query.exec("select * from admin where name = '" + user_name + "'");
    if (query.next()){
        QMessageBox::warning(this, QString::fromLocal8Bit("警告！"),
                             QString::fromLocal8Bit("管理员模式下不能借书！"), QMessageBox::Yes);
        return;
    }
    QString cur = ui->tableWidget->item(id, 2)->text();
    Borrow *borrow = new Borrow(user_name);
    borrow->Borrow_book(cur);
}

void findbook::on_pushButton_3_clicked()
{
    bool focus = ui->tableWidget->isItemSelected(ui->tableWidget->currentItem());
    if (focus == 0){
        QMessageBox::warning(this, QString::fromLocal8Bit("警告！"),
                             QString::fromLocal8Bit("你未选择任何记录！"), QMessageBox::Yes);
        return;
    }
    int id = ui->tableWidget->currentItem()->row();
    if (this->myparent == nullptr){
        QMessageBox::warning(this, QString::fromLocal8Bit("警告！"),
                             QString::fromLocal8Bit("你还未登陆用户，请先登陆！"), QMessageBox::Yes);
        return;
    }
    QSqlQuery query;
    query.exec("select * from admin where name = '" + user_name + "'");
    if (query.next()){
        QMessageBox::warning(this, QString::fromLocal8Bit("警告！"),
                             QString::fromLocal8Bit("管理员模式下不能还书！"), QMessageBox::Yes);
        return;
    }
    QString cur = ui->tableWidget->item(id, 2)->text();
    ReturnBook *returnBook = new ReturnBook (user_name);
    returnBook->return_book(cur);
}

void findbook::on_pushButton_clicked()
{
    Displaybook();
}

void findbook::on_pushButton_4_clicked(){
    Displaybook();
}
