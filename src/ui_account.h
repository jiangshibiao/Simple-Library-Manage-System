/********************************************************************************
** Form generated from reading UI file 'account.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Account
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_5;
    QLabel *label_4;
    QTableWidget *tableWidget1;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QDialog *Account)
    {
        if (Account->objectName().isEmpty())
            Account->setObjectName(QString::fromUtf8("Account"));
        Account->resize(800, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8("pokemon2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Account->setWindowIcon(icon);
        label = new QLabel(Account);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 70, 481, 111));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Microsoft YaHei UI\";"));
        label_2 = new QLabel(Account);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 30, 181, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Microsoft YaHei UI\";"));
        label_3 = new QLabel(Account);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 30, 251, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Microsoft YaHei UI\";"));
        pushButton_3 = new QPushButton(Account);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 270, 121, 51));
        pushButton_4 = new QPushButton(Account);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 270, 121, 51));
        pushButton_6 = new QPushButton(Account);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(140, 200, 121, 51));
        pushButton_7 = new QPushButton(Account);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(380, 200, 121, 51));
        pushButton_8 = new QPushButton(Account);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(140, 340, 121, 51));
        label_5 = new QLabel(Account);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 20, 200, 140));
        label_5->setStyleSheet(QString::fromUtf8("image: url(pokemon2.jpg)"));
        label_4 = new QLabel(Account);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(560, 400, 191, 511));
        label_4->setStyleSheet(QString::fromUtf8("image: url(C:/Users/jiang/Desktop/code/pokemon4.jpg)"));
        tableWidget1 = new QTableWidget(Account);
        tableWidget1->setObjectName(QString::fromUtf8("tableWidget1"));
        tableWidget1->setGeometry(QRect(68, 440, 451, 431));
        pushButton = new QPushButton(Account);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 200, 121, 51));
        pushButton_5 = new QPushButton(Account);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(620, 270, 121, 51));
        pushButton_2 = new QPushButton(Account);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 340, 121, 51));
        tableWidget2 = new QTableWidget(Account);
        tableWidget2->setObjectName(QString::fromUtf8("tableWidget2"));
        tableWidget2->setGeometry(QRect(29, 410, 740, 461));
        label_6 = new QLabel(Account);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 470, 461, 341));
        label_6->setStyleSheet(QString::fromUtf8("image: url(pokemon3.jpg)"));
        label_7 = new QLabel(Account);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 200, 51, 51));
        label_7->setStyleSheet(QString::fromUtf8("image: url(book2.jpg)"));
        label_8 = new QLabel(Account);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 200, 51, 51));
        label_8->setStyleSheet(QString::fromUtf8("image: url(book3.jpg)"));
        label_9 = new QLabel(Account);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(560, 200, 51, 51));
        label_9->setStyleSheet(QString::fromUtf8("image: url(find.jpg)"));
        label_10 = new QLabel(Account);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 270, 51, 51));
        label_10->setStyleSheet(QString::fromUtf8("image: url(insert.jpg)"));
        label_11 = new QLabel(Account);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(320, 270, 51, 51));
        label_11->setStyleSheet(QString::fromUtf8("image: url(delete.jpg)"));
        label_12 = new QLabel(Account);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(560, 270, 51, 51));
        label_12->setStyleSheet(QString::fromUtf8("image: url(expand.jpg)"));
        label_13 = new QLabel(Account);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(80, 340, 51, 51));
        label_13->setStyleSheet(QString::fromUtf8("image: url(record.jpg)"));
        label_14 = new QLabel(Account);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(320, 340, 51, 51));
        label_14->setStyleSheet(QString::fromUtf8("image: url(insert2.jpg)"));
        label_2->raise();
        label_3->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        label_5->raise();
        label_4->raise();
        label->raise();
        tableWidget1->raise();
        pushButton->raise();
        pushButton_5->raise();
        pushButton_2->raise();
        tableWidget2->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();

        retranslateUi(Account);

        QMetaObject::connectSlotsByName(Account);
    } // setupUi

    void retranslateUi(QDialog *Account)
    {
        Account->setWindowTitle(QApplication::translate("Account", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("Account", "<html><head/><body><p><span style=\" font-size:18pt;\">\346\254\242\350\277\216\346\202\250\344\275\277\347\224\250\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Account", "\345\260\212\346\225\254\347\232\204\347\256\241\347\220\206\345\221\230\357\274\232", nullptr));
        label_3->setText(QString());
        pushButton_3->setText(QApplication::translate("Account", "\345\242\236\345\212\240\345\200\237\344\271\246\350\257\201", nullptr));
        pushButton_4->setText(QApplication::translate("Account", "\345\210\240\351\231\244\345\200\237\344\271\246\350\257\201", nullptr));
        pushButton_6->setText(QApplication::translate("Account", "\345\215\225\345\206\214\345\233\276\344\271\246\345\205\245\345\272\223", nullptr));
        pushButton_7->setText(QApplication::translate("Account", "\346\211\271\351\207\217\345\233\276\344\271\246\345\205\245\345\272\223", nullptr));
        pushButton_8->setText(QApplication::translate("Account", "\347\224\250\346\210\267\345\200\237\344\271\246\350\256\260\345\275\225", nullptr));
        label_5->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("Account", "\345\233\276\344\271\246\346\237\245\350\257\242", nullptr));
        pushButton_5->setText(QApplication::translate("Account", "\346\237\245\347\234\213\345\200\237\344\271\246\350\257\201", nullptr));
        pushButton_2->setText(QApplication::translate("Account", "\345\242\236\345\212\240admin", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Account: public Ui_Account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
