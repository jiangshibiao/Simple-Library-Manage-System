#include "mainwindow.h"
#include <QApplication>
#include <QStyle>
#include <QStyleFactory>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle(QStyleFactory::create("fusion"));
    QApplication::setPalette(QApplication::style()->standardPalette());
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");    //添加数据库驱动
    db.setDatabaseName("library.db");
    db.open();
    QSqlQuery query;
    query.exec("create table book(id varchar,class varchar,name varchar,company varchar,year int,writer varchar,price decimal(18,2),number int,leftnumber int)");
    query.exec("create table admin(name varchar,password varchar)");
    query.exec("create table cuser(name varchar,password varchar)");
    query.exec("create table note(booknum varchar,cardnum varchar,borrow varchar,return varchar)");
    query.exec("select * from admin where name = 'admin'");
    if (!query.next())
        query.exec("insert into admin values('admin','admin')");

    MainWindow w;
    w.show();

    return a.exec();
}
