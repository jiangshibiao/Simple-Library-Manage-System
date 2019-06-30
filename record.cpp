#include "record.h"

BookInfo::BookInfo(QString* a)
{
    this->id = a[0];
    this->className = a[1];
    this->name = a[2];
    this->company = a[3];
    this->year = a[4];
    this->writer = a[5];
    this->price = a[6];
    this->number = a[7];
}

BookInfo::~BookInfo()
{

}

CardInfo::CardInfo(QString* a)
{
    this->id = a[0];
    this->name = a[1];
    this->company = a[2];
    this->className = a[3];
}

CardInfo::~CardInfo()
{

}

AdminInfo::AdminInfo(QString* a)
{
    this->name = a[0];
    this->password = a[1];
}

AdminInfo::~AdminInfo()
{

}

NoteInfo::NoteInfo(QString* a)
{
    this->bookNum = a[0];
    this->cardNum = a[1];
    this->borrowD = a[2];
    this->returnD = a[3];
    this->Admin = a[4];
}

NoteInfo::~NoteInfo()
{

}
