#include "instext.h"
#include "ui_instext.h"

InsText::InsText(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InsText)
{
    ui->setupUi(this);
}

InsText::~InsText()
{
    delete ui;
}

void InsText::on_pushButton_clicked()
{

    bool fok = 1;
    QString s=ui->textEdit->toPlainText();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='(')
        {
            QString bookMessage[8];
            int num=0;
            bookMessage[0]="";
            while(1)
            {
                i++;
                if(s.at(i)==')') break;
                if(s.at(i)==' ') continue;
                if(s.at(i)==',')
                {
                    num++;
                    if(num>=8) break;
                    bookMessage[num]="";
                    continue;
                }
                bookMessage[num]+=s.at(i);
            }
            if(num>=8)
            {
                fok=0;
                break;
            }
            for(int j=0;j<8;j++)
            {
                qDebug()<<j<<" "<<bookMessage[j];
            }
            QSqlQuery query;
            query.exec("select id from book where id ='"+bookMessage[0]+"'");
            bool ok;
            if(query.next())
            {
               ok = query.exec("update book set number = number + " + bookMessage[7]
                        + " where id = '" + bookMessage[0] +"'");
               query.exec("update book set leftnumber = leftnumber + " + bookMessage[7]
                                   + " where id = '" + bookMessage[0] +"'");
            }
            else
            {
                ok = query.exec("insert into book values('" + bookMessage[0] + "','" + bookMessage[1] + "','" + bookMessage[2] + "','" + bookMessage[3]
                         + "'," + bookMessage[4] + ",'" + bookMessage[5] + "'," + bookMessage[6] + "," + bookMessage[7] + "," + bookMessage[7] + ")");
            }
            if(!ok) fok=0;
        }
    }
    if(!fok)
    {
        QMessageBox::critical(nullptr, "Error", QString::fromLocal8Bit("插入失败"), QMessageBox::Yes);
    }
    else
    {
        QMessageBox::information(nullptr, "Success", QString::fromLocal8Bit("插入成功"), QMessageBox::Yes);
        accept();
    }
}
