/********************************************************************************
** Form generated from reading UI file 'numberofedges.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBEROFEDGES_H
#define UI_NUMBEROFEDGES_H

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

class Ui_NumberofEdges
{
public:
    QPushButton *OK;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Num_NODES;
    QLineEdit *Num_Edges;

    void setupUi(QDialog *NumberofEdges)
    {
        if (NumberofEdges->objectName().isEmpty())
            NumberofEdges->setObjectName(QStringLiteral("NumberofEdges"));
        NumberofEdges->resize(400, 131);
        QIcon icon;
        icon.addFile(QStringLiteral("logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NumberofEdges->setWindowIcon(icon);
        OK = new QPushButton(NumberofEdges);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(320, 100, 75, 23));
        label = new QLabel(NumberofEdges);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 111, 16));
        label_2 = new QLabel(NumberofEdges);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 101, 16));
        Num_NODES = new QLineEdit(NumberofEdges);
        Num_NODES->setObjectName(QStringLiteral("Num_NODES"));
        Num_NODES->setGeometry(QRect(160, 40, 113, 20));
        Num_Edges = new QLineEdit(NumberofEdges);
        Num_Edges->setObjectName(QStringLiteral("Num_Edges"));
        Num_Edges->setGeometry(QRect(160, 70, 113, 20));

        retranslateUi(NumberofEdges);

        QMetaObject::connectSlotsByName(NumberofEdges);
    } // setupUi

    void retranslateUi(QDialog *NumberofEdges)
    {
        NumberofEdges->setWindowTitle(QApplication::translate("NumberofEdges", "Add Number of Nodes and Edges", 0));
        OK->setText(QApplication::translate("NumberofEdges", "OK", 0));
        label->setText(QApplication::translate("NumberofEdges", "Add Number of Nodes", 0));
        label_2->setText(QApplication::translate("NumberofEdges", "Add Number Edges", 0));
        Num_NODES->setText(QApplication::translate("NumberofEdges", "0", 0));
        Num_Edges->setText(QApplication::translate("NumberofEdges", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class NumberofEdges: public Ui_NumberofEdges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBEROFEDGES_H
