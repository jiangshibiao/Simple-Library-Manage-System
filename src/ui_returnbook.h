/********************************************************************************
** Form generated from reading UI file 'returnbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_H
#define UI_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReturnBook
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ReturnBook)
    {
        if (ReturnBook->objectName().isEmpty())
            ReturnBook->setObjectName(QString::fromUtf8("ReturnBook"));
        ReturnBook->resize(500, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("return.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ReturnBook->setWindowIcon(icon);
        label = new QLabel(ReturnBook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 411, 101));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Microsoft JhengHei UI\";"));
        lineEdit = new QLineEdit(ReturnBook);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 150, 341, 41));
        pushButton = new QPushButton(ReturnBook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 240, 91, 31));
        pushButton_2 = new QPushButton(ReturnBook);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 240, 91, 31));

        retranslateUi(ReturnBook);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ReturnBook, SLOT(close()));

        QMetaObject::connectSlotsByName(ReturnBook);
    } // setupUi

    void retranslateUi(QDialog *ReturnBook)
    {
        ReturnBook->setWindowTitle(QApplication::translate("ReturnBook", "\346\214\211\344\271\246\345\220\215\350\277\230\344\271\246", nullptr));
        label->setText(QApplication::translate("ReturnBook", "\350\257\267\350\276\223\345\205\245\346\211\200\350\246\201\345\275\222\350\277\230\347\232\204\345\233\276\344\271\246\345\220\215\345\255\227\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("ReturnBook", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("ReturnBook", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturnBook: public Ui_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_H
