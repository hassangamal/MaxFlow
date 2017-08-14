/********************************************************************************
** Form generated from reading UI file 'frotomax.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FROTOMAX_H
#define UI_FROTOMAX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FroToMAx
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *To;
    QLineEdit *from;
    QLineEdit *to;

    void setupUi(QDialog *FroToMAx)
    {
        if (FroToMAx->objectName().isEmpty())
            FroToMAx->setObjectName(QStringLiteral("FroToMAx"));
        FroToMAx->resize(216, 125);
        pushButton = new QPushButton(FroToMAx);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 100, 75, 23));
        label = new QLabel(FroToMAx);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 47, 13));
        To = new QLabel(FroToMAx);
        To->setObjectName(QStringLiteral("To"));
        To->setGeometry(QRect(40, 70, 47, 13));
        from = new QLineEdit(FroToMAx);
        from->setObjectName(QStringLiteral("from"));
        from->setGeometry(QRect(70, 30, 113, 20));
        to = new QLineEdit(FroToMAx);
        to->setObjectName(QStringLiteral("to"));
        to->setGeometry(QRect(70, 70, 113, 20));

        retranslateUi(FroToMAx);

        QMetaObject::connectSlotsByName(FroToMAx);
    } // setupUi

    void retranslateUi(QDialog *FroToMAx)
    {
        FroToMAx->setWindowTitle(QApplication::translate("FroToMAx", "From To", 0));
        pushButton->setText(QApplication::translate("FroToMAx", "OK", 0));
        label->setText(QApplication::translate("FroToMAx", "From", 0));
        To->setText(QApplication::translate("FroToMAx", "To", 0));
        from->setText(QApplication::translate("FroToMAx", "0", 0));
        to->setText(QApplication::translate("FroToMAx", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class FroToMAx: public Ui_FroToMAx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FROTOMAX_H
