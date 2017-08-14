/********************************************************************************
** Form generated from reading UI file 'about_program.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_PROGRAM_H
#define UI_ABOUT_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About_Program
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *About_Program)
    {
        if (About_Program->objectName().isEmpty())
            About_Program->setObjectName(QStringLiteral("About_Program"));
        About_Program->resize(590, 284);
        QIcon icon;
        icon.addFile(QStringLiteral("logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        About_Program->setWindowIcon(icon);
        label_2 = new QLabel(About_Program);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 10, 421, 221));
        label = new QLabel(About_Program);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 301, 171));
        pushButton = new QPushButton(About_Program);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 252, 75, 31));

        retranslateUi(About_Program);

        QMetaObject::connectSlotsByName(About_Program);
    } // setupUi

    void retranslateUi(QDialog *About_Program)
    {
        About_Program->setWindowTitle(QApplication::translate("About_Program", "about program", 0));
        label_2->setText(QString());
        label->setText(QString());
        pushButton->setText(QApplication::translate("About_Program", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class About_Program: public Ui_About_Program {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_PROGRAM_H
