/********************************************************************************
** Form generated from reading UI file 'borrow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROW_H
#define UI_BORROW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Borrow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Borrow)
    {
        if (Borrow->objectName().isEmpty())
            Borrow->setObjectName(QString::fromUtf8("Borrow"));
        Borrow->resize(500, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("borrow.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Borrow->setWindowIcon(icon);
        pushButton = new QPushButton(Borrow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 240, 91, 31));
        pushButton_2 = new QPushButton(Borrow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 240, 91, 31));
        label = new QLabel(Borrow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 391, 101));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Microsoft JhengHei UI\";"));
        lineEdit = new QLineEdit(Borrow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 140, 331, 41));

        retranslateUi(Borrow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Borrow, SLOT(close()));

        QMetaObject::connectSlotsByName(Borrow);
    } // setupUi

    void retranslateUi(QDialog *Borrow)
    {
        Borrow->setWindowTitle(QApplication::translate("Borrow", "\346\214\211\344\271\246\345\220\215\345\200\237\344\271\246", nullptr));
        pushButton->setText(QApplication::translate("Borrow", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("Borrow", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("Borrow", "\350\257\267\350\276\223\345\205\245\346\211\200\350\246\201\345\200\237\351\230\205\347\232\204\345\233\276\344\271\246\345\220\215\345\255\227\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Borrow: public Ui_Borrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROW_H
