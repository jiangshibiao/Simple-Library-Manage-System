/********************************************************************************
** Form generated from reading UI file 'delcard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELCARD_H
#define UI_DELCARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DelCard
{
public:
    QLineEdit *idEdit;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *DelCard)
    {
        if (DelCard->objectName().isEmpty())
            DelCard->setObjectName(QString::fromUtf8("DelCard"));
        DelCard->resize(500, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("record.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        DelCard->setWindowIcon(icon);
        idEdit = new QLineEdit(DelCard);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setGeometry(QRect(130, 140, 231, 31));
        label = new QLabel(DelCard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 381, 71));
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Microsoft JhengHei UI\";"));
        pushButton_2 = new QPushButton(DelCard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 220, 93, 28));
        pushButton = new QPushButton(DelCard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 220, 93, 28));

        retranslateUi(DelCard);
        QObject::connect(pushButton_2, SIGNAL(clicked()), DelCard, SLOT(close()));

        QMetaObject::connectSlotsByName(DelCard);
    } // setupUi

    void retranslateUi(QDialog *DelCard)
    {
        DelCard->setWindowTitle(QApplication::translate("DelCard", "\345\210\240\351\231\244\345\200\237\344\271\246\350\257\201", nullptr));
        label->setText(QApplication::translate("DelCard", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\200\237\344\271\246\350\257\201\345\215\241\345\217\267\357\274\232</span></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("DelCard", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QApplication::translate("DelCard", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelCard: public Ui_DelCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELCARD_H
