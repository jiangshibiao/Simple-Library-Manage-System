/********************************************************************************
** Form generated from reading UI file 'accountuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTUSER_H
#define UI_ACCOUNTUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Accountuser
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Accountuser)
    {
        if (Accountuser->objectName().isEmpty())
            Accountuser->setObjectName(QString::fromUtf8("Accountuser"));
        Accountuser->resize(800, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8("pokemon2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Accountuser->setWindowIcon(icon);
        label = new QLabel(Accountuser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 50, 451, 151));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Microsoft YaHei UI\";"));
        label_2 = new QLabel(Accountuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 20, 171, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Microsoft YaHei UI\";"));
        label_3 = new QLabel(Accountuser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 20, 301, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Microsoft YaHei UI\";"));
        pushButton = new QPushButton(Accountuser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 190, 121, 51));
        pushButton_2 = new QPushButton(Accountuser);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 190, 121, 51));
        pushButton_8 = new QPushButton(Accountuser);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(350, 280, 121, 51));
        pushButton_9 = new QPushButton(Accountuser);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 280, 121, 51));
        label_4 = new QLabel(Accountuser);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 180, 201, 171));
        label_4->setStyleSheet(QString::fromUtf8("image: url(C:/Users/jiang/Desktop/code/pokemon1.jpg)"));
        label_5 = new QLabel(Accountuser);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 20, 200, 140));
        label_5->setStyleSheet(QString::fromUtf8("image: url(pokemon2.jpg)"));
        label_6 = new QLabel(Accountuser);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 190, 51, 51));
        label_6->setStyleSheet(QString::fromUtf8("image: url(borrow.jpg)"));
        label_7 = new QLabel(Accountuser);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 190, 51, 51));
        label_7->setStyleSheet(QString::fromUtf8("image: url(return.jpg)"));
        label_8 = new QLabel(Accountuser);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 280, 51, 51));
        label_8->setStyleSheet(QString::fromUtf8("image: url(find.jpg)"));
        label_9 = new QLabel(Accountuser);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 280, 51, 51));
        label_9->setStyleSheet(QString::fromUtf8("image: url(record.jpg)"));
        tableWidget = new QTableWidget(Accountuser);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(29, 410, 740, 361));
        pushButton_3 = new QPushButton(Accountuser);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(610, 370, 91, 31));
        pushButton_4 = new QPushButton(Accountuser);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(490, 370, 91, 31));
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label->raise();
        tableWidget->raise();
        pushButton_3->raise();
        pushButton_4->raise();

        retranslateUi(Accountuser);

        QMetaObject::connectSlotsByName(Accountuser);
    } // setupUi

    void retranslateUi(QDialog *Accountuser)
    {
        Accountuser->setWindowTitle(QApplication::translate("Accountuser", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("Accountuser", "<html><head/><body><p><span style=\" font-size:20pt;\">\346\254\242\350\277\216\346\202\250\344\275\277\347\224\250\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Accountuser", "\345\260\212\346\225\254\347\232\204\347\224\250\346\210\267\357\274\232", nullptr));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("Accountuser", "\346\214\211\344\271\246\345\220\215\350\277\230\344\271\246", nullptr));
        pushButton_2->setText(QApplication::translate("Accountuser", "\346\214\211\344\271\246\345\220\215\345\200\237\344\271\246", nullptr));
        pushButton_8->setText(QApplication::translate("Accountuser", "\346\237\245\347\234\213\346\210\221\347\232\204\350\256\260\345\275\225", nullptr));
        pushButton_9->setText(QApplication::translate("Accountuser", "\345\233\276\344\271\246\346\237\245\350\257\242", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        pushButton_3->setText(QApplication::translate("Accountuser", "\345\277\253\351\200\237\350\277\230\344\271\246", nullptr));
        pushButton_4->setText(QApplication::translate("Accountuser", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Accountuser: public Ui_Accountuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTUSER_H
