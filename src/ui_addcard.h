/********************************************************************************
** Form generated from reading UI file 'addcard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCARD_H
#define UI_ADDCARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddCard
{
public:
    QLabel *label;
    QLineEdit *idEdit;
    QLabel *label_2;
    QLineEdit *idEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *AddCard)
    {
        if (AddCard->objectName().isEmpty())
            AddCard->setObjectName(QString::fromUtf8("AddCard"));
        AddCard->resize(500, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("record.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AddCard->setWindowIcon(icon);
        label = new QLabel(AddCard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 110, 72, 15));
        idEdit = new QLineEdit(AddCard);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setGeometry(QRect(160, 100, 231, 31));
        label_2 = new QLabel(AddCard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 170, 72, 15));
        idEdit_2 = new QLineEdit(AddCard);
        idEdit_2->setObjectName(QString::fromUtf8("idEdit_2"));
        idEdit_2->setGeometry(QRect(160, 160, 231, 31));
        pushButton = new QPushButton(AddCard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 230, 93, 28));
        pushButton_2 = new QPushButton(AddCard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 230, 93, 28));
        label_3 = new QLabel(AddCard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 20, 201, 51));
        label_4 = new QLabel(AddCard);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 20, 101, 61));
        label_4->setStyleSheet(QString::fromUtf8("image: url(clock.jpg)"));

        retranslateUi(AddCard);
        QObject::connect(pushButton_2, SIGNAL(clicked()), AddCard, SLOT(close()));

        QMetaObject::connectSlotsByName(AddCard);
    } // setupUi

    void retranslateUi(QDialog *AddCard)
    {
        AddCard->setWindowTitle(QApplication::translate("AddCard", "\345\242\236\345\212\240\345\215\241\345\217\267", nullptr));
        label->setText(QApplication::translate("AddCard", "\345\215\241\345\217\267", nullptr));
        label_2->setText(QApplication::translate("AddCard", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("AddCard", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("AddCard", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QApplication::translate("AddCard", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\202\250\346\255\243\345\234\250\346\226\260\345\242\236\345\215\241\345\217\267\342\200\246\342\200\246</span></p></body></html>", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddCard: public Ui_AddCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCARD_H
