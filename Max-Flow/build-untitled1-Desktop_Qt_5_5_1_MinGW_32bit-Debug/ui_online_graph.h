/********************************************************************************
** Form generated from reading UI file 'online_graph.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONLINE_GRAPH_H
#define UI_ONLINE_GRAPH_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Online_Graph
{
public:
    QWebView *webView;
    QPushButton *pushButton;

    void setupUi(QDialog *Online_Graph)
    {
        if (Online_Graph->objectName().isEmpty())
            Online_Graph->setObjectName(QStringLiteral("Online_Graph"));
        Online_Graph->resize(883, 436);
        webView = new QWebView(Online_Graph);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(10, 20, 851, 371));
        webView->setUrl(QUrl(QStringLiteral("http://visualgo.net/maxflow.html")));
        pushButton = new QPushButton(Online_Graph);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(764, 400, 91, 31));

        retranslateUi(Online_Graph);

        QMetaObject::connectSlotsByName(Online_Graph);
    } // setupUi

    void retranslateUi(QDialog *Online_Graph)
    {
        Online_Graph->setWindowTitle(QApplication::translate("Online_Graph", "Online Graph", 0));
        pushButton->setText(QApplication::translate("Online_Graph", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Online_Graph: public Ui_Online_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONLINE_GRAPH_H
