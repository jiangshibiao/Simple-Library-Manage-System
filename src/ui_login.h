/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLineEdit *pwdLineEdit;
    QLineEdit *usrLineEdit;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(500, 300);
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 80, 72, 15));
        pwdLineEdit = new QLineEdit(Login);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(170, 130, 231, 31));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        usrLineEdit = new QLineEdit(Login);
        usrLineEdit->setObjectName(QString::fromUtf8("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(170, 70, 231, 31));
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 210, 93, 28));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 140, 72, 15));
        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 210, 93, 28));

        retranslateUi(Login);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Login, SLOT(close()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "\347\231\273\345\275\225ing\342\200\246\342\200\246", nullptr));
        label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pwdLineEdit->setPlaceholderText(QString());
        usrLineEdit->setText(QString());
        usrLineEdit->setPlaceholderText(QString());
        pushButton_2->setText(QApplication::translate("Login", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
