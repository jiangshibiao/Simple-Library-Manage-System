#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->pushButton->setDefault(true);
    ui->pushButton_2->setDefault(false);  //设置回车键默认按钮
    ui->usrLineEdit->setFocus();//设置光标默认位置
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QSqlQuery query;

    query.exec("select * from admin where name = '" + ui->usrLineEdit->text() + "'");
    if(query.next() &&
           ui->pwdLineEdit->text() == query.value(1).toString())
    {
       Account *cur = new Account(ui->usrLineEdit->text());
       cur->show();
       accept();  //相当于销毁该窗口
    }
    else {
        query.exec("select * from cuser where name = '" + ui->usrLineEdit->text() + "'");
        if(query.next() &&
               ui->pwdLineEdit->text() == query.value(1).toString())
        {
            Accountuser *cur = new Accountuser(ui->usrLineEdit->text());
            //delete ui;
            cur->show();
            accept();  //相当于销毁该窗口
        }
        else
        {
            QMessageBox::warning(this, QString::fromLocal8Bit("警告！"),
                                 QString::fromLocal8Bit("用户名或密码错误！"),
                                 QMessageBox::Yes);
            // 清空内容并定位光标
            ui->usrLineEdit->clear();
            ui->pwdLineEdit->clear();
            ui->usrLineEdit->setFocus();
        }
    }
}
