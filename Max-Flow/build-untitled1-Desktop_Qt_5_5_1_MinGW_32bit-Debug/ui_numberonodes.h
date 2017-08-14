/********************************************************************************
** Form generated from reading UI file 'numberonodes.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERONODES_H
#define UI_NUMBERONODES_H

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

class Ui_NumberONodes
{
public:
    QLabel *label;
    QLineEdit *NumberofNodes;
    QLabel *label_2;
    QLineEdit *Number_Edges;
    QPushButton *OK;

    void setupUi(QDialog *NumberONodes)
    {
        if (NumberONodes->objectName().isEmpty())
            NumberONodes->setObjectName(QStringLiteral("NumberONodes"));
        NumberONodes->resize(400, 170);
        label = new QLabel(NumberONodes);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 111, 21));
        NumberofNodes = new QLineEdit(NumberONodes);
        NumberofNodes->setObjectName(QStringLiteral("NumberofNodes"));
        NumberofNodes->setGeometry(QRect(190, 40, 113, 20));
        label_2 = new QLabel(NumberONodes);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 91, 20));
        Number_Edges = new QLineEdit(NumberONodes);
        Number_Edges->setObjectName(QStringLiteral("Number_Edges"));
        Number_Edges->setGeometry(QRect(190, 100, 113, 20));
        OK = new QPushButton(NumberONodes);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(310, 140, 75, 23));

        retranslateUi(NumberONodes);

        QMetaObject::connectSlotsByName(NumberONodes);
    } // setupUi

    void retranslateUi(QDialog *NumberONodes)
    {
        NumberONodes->setWindowTitle(QApplication::translate("NumberONodes", "Dialog", 0));
        label->setText(QApplication::translate("NumberONodes", "Add Number of Nodes", 0));
        label_2->setText(QApplication::translate("NumberONodes", "Number of Edges", 0));
        OK->setText(QApplication::translate("NumberONodes", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class NumberONodes: public Ui_NumberONodes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERONODES_H
