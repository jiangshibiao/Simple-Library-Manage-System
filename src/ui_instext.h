/********************************************************************************
** Form generated from reading UI file 'instext.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTEXT_H
#define UI_INSTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_InsText
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *InsText)
    {
        if (InsText->objectName().isEmpty())
            InsText->setObjectName(QString::fromUtf8("InsText"));
        InsText->resize(400, 600);
        pushButton = new QPushButton(InsText);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 540, 93, 28));
        textEdit = new QTextEdit(InsText);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 110, 331, 291));
        pushButton_2 = new QPushButton(InsText);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 540, 93, 28));
        label = new QLabel(InsText);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 420, 341, 41));
        label_2 = new QLabel(InsText);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 30, 231, 61));
        label_3 = new QLabel(InsText);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 40, 51, 51));
        label_3->setStyleSheet(QString::fromUtf8("image: url(book3.jpg)"));
        label_4 = new QLabel(InsText);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 450, 341, 41));
        label_5 = new QLabel(InsText);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 480, 341, 41));

        retranslateUi(InsText);
        QObject::connect(pushButton_2, SIGNAL(clicked()), InsText, SLOT(close()));

        QMetaObject::connectSlotsByName(InsText);
    } // setupUi

    void retranslateUi(QDialog *InsText)
    {
        InsText->setWindowTitle(QApplication::translate("InsText", "\346\211\271\351\207\217\345\233\276\344\271\246\345\205\245\345\272\223", nullptr));
        pushButton->setText(QApplication::translate("InsText", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("InsText", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("InsText", "\350\257\267\345\260\206\350\246\201\350\276\223\345\205\245\347\232\204\346\226\207\346\234\254\345\244\215\345\210\266\345\210\260\344\270\212\351\235\242\346\226\207\346\234\254\346\241\206\343\200\202", nullptr));
        label_2->setText(QApplication::translate("InsText", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\255\243\345\234\250\346\211\271\351\207\217\346\217\222\345\205\245\345\233\276\344\271\246\342\200\246\342\200\246</span></p></body></html>", nullptr));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("InsText", "\345\220\214\344\270\200\346\234\254\344\271\246\347\232\204\345\206\205\345\256\271\347\224\250\351\200\227\345\217\267\351\232\224\345\274\200\357\274\214\351\225\277\345\272\246\344\270\2728\343\200\202", nullptr));
        label_5->setText(QApplication::translate("InsText", "\344\270\215\345\220\214\344\271\246\344\271\213\351\227\264\347\224\250\351\200\227\345\217\267\345\210\206\351\232\224\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsText: public Ui_InsText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTEXT_H
