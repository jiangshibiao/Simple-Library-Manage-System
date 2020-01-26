/********************************************************************************
** Form generated from reading UI file 'findbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDBOOK_H
#define UI_FINDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_findbook
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;

    void setupUi(QDialog *findbook)
    {
        if (findbook->objectName().isEmpty())
            findbook->setObjectName(QString::fromUtf8("findbook"));
        findbook->resize(1100, 850);
        pushButton = new QPushButton(findbook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(820, 230, 91, 31));
        comboBox = new QComboBox(findbook);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 180, 461, 31));
        label = new QLabel(findbook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 180, 131, 81));
        label->setStyleSheet(QString::fromUtf8("image: url(expand.jpg)"));
        label_2 = new QLabel(findbook);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 40, 501, 101));
        tableWidget = new QTableWidget(findbook);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 340, 1000, 481));
        lineEdit = new QLineEdit(findbook);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(270, 230, 461, 31));
        lineEdit->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton_2 = new QPushButton(findbook);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(830, 290, 91, 31));
        pushButton_3 = new QPushButton(findbook);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(950, 290, 91, 31));
        pushButton_4 = new QPushButton(findbook);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(710, 290, 91, 31));
        label_3 = new QLabel(findbook);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(780, 40, 191, 151));
        label_3->setStyleSheet(QString::fromUtf8("image: url(cat.jpg)"));

        retranslateUi(findbook);

        QMetaObject::connectSlotsByName(findbook);
    } // setupUi

    void retranslateUi(QDialog *findbook)
    {
        findbook->setWindowTitle(QApplication::translate("findbook", "\345\233\276\344\271\246\346\237\245\350\257\242", nullptr));
        pushButton->setText(QApplication::translate("findbook", "\347\241\256\350\256\244", nullptr));
        comboBox->setItemText(0, QApplication::translate("findbook", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox->setItemText(1, QApplication::translate("findbook", "\346\237\245\350\257\242\346\211\200\346\234\211\344\271\246", nullptr));
        comboBox->setItemText(2, QApplication::translate("findbook", "\346\214\211\347\261\273\345\210\253\346\237\245\350\257\242", nullptr));
        comboBox->setItemText(3, QApplication::translate("findbook", "\346\214\211\344\271\246\345\220\215\346\237\245\350\257\242", nullptr));
        comboBox->setItemText(4, QApplication::translate("findbook", "\346\214\211\345\207\272\347\211\210\347\244\276\346\237\245\350\257\242", nullptr));
        comboBox->setItemText(5, QApplication::translate("findbook", "\346\214\211\345\271\264\344\273\275\346\237\245\350\257\242", nullptr));
        comboBox->setItemText(6, QApplication::translate("findbook", "\346\214\211\344\275\234\350\200\205\346\237\245\350\257\242", nullptr));
        comboBox->setItemText(7, QApplication::translate("findbook", "\346\214\211\344\273\267\346\240\274\346\237\245\350\257\242", nullptr));

        label->setText(QString());
        label_2->setText(QApplication::translate("findbook", "<html><head/><body><p><span style=\" font-size:20pt;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\233\276\344\271\246\346\237\245\350\257\242\345\212\237\350\203\275!</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("findbook", "\350\257\267\345\234\250\346\255\244\350\276\223\345\205\245\345\205\263\351\224\256\350\257\215", nullptr));
        pushButton_2->setText(QApplication::translate("findbook", "\345\277\253\351\200\237\345\200\237\351\230\205", nullptr));
        pushButton_3->setText(QApplication::translate("findbook", "\345\277\253\351\200\237\350\277\230\344\271\246", nullptr));
        pushButton_4->setText(QApplication::translate("findbook", "\345\210\267\346\226\260", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class findbook: public Ui_findbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDBOOK_H
