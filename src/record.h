#ifndef RECORD_H
#define RECORD_H
#include <QDialog>
#include <QMessageBox>
#include <QStringList>
#include <Qtsql>
#include <QString>

class BookInfo
{
public:
    QString id;
    QString className;
    QString name;
    QString company;
    QString year;
    QString writer;
    QString price;
    QString number;
    QString leftNumber;
    BookInfo(QString* a);
    ~BookInfo();
};

class CardInfo
{
public:
    QString id;
    QString name;
    QString company;
    QString className;
    CardInfo(QString* a);
    ~CardInfo();
};

class AdminInfo
{
public:
    QString name;
    QString password;
    AdminInfo(QString* a);
    ~AdminInfo();
};

class NoteInfo
{
public:
    QString bookNum;
    QString cardNum;
    QString borrowD;
    QString returnD;
    QString Admin;
    NoteInfo(QString* a);
    ~NoteInfo();
};
#endif // RECORD_H
