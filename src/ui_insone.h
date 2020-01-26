/********************************************************************************
** Form generated from reading UI file 'insone.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSONE_H
#define UI_INSONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InsOne
{
public:
    QLabel *label;
    QLineEdit *writerEdit;
    QLabel *label_6;
    QLineEdit *classEdit;
    QLineEdit *companyEdit;
    QPushButton *insertBtn;
    QLineEdit *nameEdit;
    QLineEdit *numberEdit;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *yearEdit;
    QLabel *label_7;
    QPushButton *exitBtn;
    QLabel *label_3;
    QLineEdit *priceEdit;
    QLineEdit *idEdit;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *InsOne)
    {
        if (InsOne->objectName().isEmpty())
            InsOne->setObjectName(QString::fromUtf8("InsOne"));
        InsOne->resize(400, 600);
        label = new QLabel(InsOne);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 110, 72, 15));
        writerEdit = new QLineEdit(InsOne);
        writerEdit->setObjectName(QString::fromUtf8("writerEdit"));
        writerEdit->setGeometry(QRect(90, 350, 281, 31));
        label_6 = new QLabel(InsOne);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 360, 72, 15));
        classEdit = new QLineEdit(InsOne);
        classEdit->setObjectName(QString::fromUtf8("classEdit"));
        classEdit->setGeometry(QRect(90, 150, 281, 31));
        companyEdit = new QLineEdit(InsOne);
        companyEdit->setObjectName(QString::fromUtf8("companyEdit"));
        companyEdit->setGeometry(QRect(90, 250, 281, 31));
        insertBtn = new QPushButton(InsOne);
        insertBtn->setObjectName(QString::fromUtf8("insertBtn"));
        insertBtn->setGeometry(QRect(80, 530, 93, 28));
        nameEdit = new QLineEdit(InsOne);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(90, 200, 281, 31));
        numberEdit = new QLineEdit(InsOne);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setGeometry(QRect(90, 450, 281, 31));
        label_4 = new QLabel(InsOne);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 260, 72, 15));
        label_8 = new QLabel(InsOne);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 460, 72, 15));
        yearEdit = new QLineEdit(InsOne);
        yearEdit->setObjectName(QString::fromUtf8("yearEdit"));
        yearEdit->setGeometry(QRect(90, 300, 281, 31));
        label_7 = new QLabel(InsOne);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 410, 72, 15));
        exitBtn = new QPushButton(InsOne);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(220, 530, 93, 28));
        label_3 = new QLabel(InsOne);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 210, 72, 15));
        priceEdit = new QLineEdit(InsOne);
        priceEdit->setObjectName(QString::fromUtf8("priceEdit"));
        priceEdit->setGeometry(QRect(90, 400, 281, 31));
        idEdit = new QLineEdit(InsOne);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setGeometry(QRect(90, 100, 281, 31));
        label_5 = new QLabel(InsOne);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 310, 72, 15));
        label_2 = new QLabel(InsOne);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 160, 72, 15));
        label_9 = new QLabel(InsOne);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 30, 261, 51));
        label_10 = new QLabel(InsOne);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 30, 61, 51));
        label_10->setStyleSheet(QString::fromUtf8("image: url(book2.jpg)"));

        retranslateUi(InsOne);
        QObject::connect(exitBtn, SIGNAL(clicked()), InsOne, SLOT(close()));

        QMetaObject::connectSlotsByName(InsOne);
    } // setupUi

    void retranslateUi(QDialog *InsOne)
    {
        InsOne->setWindowTitle(QApplication::translate("InsOne", "\345\215\225\345\206\214\345\233\276\344\271\246\345\205\245\345\272\223", nullptr));
        label->setText(QApplication::translate("InsOne", "\344\271\246\345\217\267", nullptr));
        label_6->setText(QApplication::translate("InsOne", "\344\275\234\350\200\205", nullptr));
        insertBtn->setText(QApplication::translate("InsOne", "\346\217\222\345\205\245", nullptr));
        label_4->setText(QApplication::translate("InsOne", "\345\207\272\347\211\210\347\244\276", nullptr));
        label_8->setText(QApplication::translate("InsOne", "\346\225\260\351\207\217", nullptr));
        label_7->setText(QApplication::translate("InsOne", "\344\273\267\346\240\274", nullptr));
        exitBtn->setText(QApplication::translate("InsOne", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QApplication::translate("InsOne", "\344\271\246\345\220\215", nullptr));
        label_5->setText(QApplication::translate("InsOne", "\345\271\264\344\273\275", nullptr));
        label_2->setText(QApplication::translate("InsOne", "\347\261\273\345\210\253", nullptr));
        label_9->setText(QApplication::translate("InsOne", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\255\243\345\234\250\346\217\222\345\205\245\345\215\225\346\234\254\345\233\276\344\271\246\342\200\246\342\200\246</span></p></body></html>", nullptr));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InsOne: public Ui_InsOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSONE_H
