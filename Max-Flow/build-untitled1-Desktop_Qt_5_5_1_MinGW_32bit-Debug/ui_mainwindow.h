/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_Number_of_Nodes;
    QAction *actionOnline_Graph;
    QAction *actionAbout_Developer;
    QAction *actionAbout_Developer_2;
    QAction *actionAbout_Program;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *Number_Nodes;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *linet_from;
    QLineEdit *linet_T;
    QLineEdit *lineT_cost;
    QPushButton *AddNode;
    QPushButton *Max_flow;
    QPushButton *Get_paths;
    QPlainTextEdit *Answer;
    QPushButton *pushButton;
    QLabel *label_5;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QMenu *menuOnline_Graph;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(441, 424);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        actionAdd_Number_of_Nodes = new QAction(MainWindow);
        actionAdd_Number_of_Nodes->setObjectName(QStringLiteral("actionAdd_Number_of_Nodes"));
        actionOnline_Graph = new QAction(MainWindow);
        actionOnline_Graph->setObjectName(QStringLiteral("actionOnline_Graph"));
        actionAbout_Developer = new QAction(MainWindow);
        actionAbout_Developer->setObjectName(QStringLiteral("actionAbout_Developer"));
        actionAbout_Developer_2 = new QAction(MainWindow);
        actionAbout_Developer_2->setObjectName(QStringLiteral("actionAbout_Developer_2"));
        actionAbout_Program = new QAction(MainWindow);
        actionAbout_Program->setObjectName(QStringLiteral("actionAbout_Program"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 70, 111, 31));
        Number_Nodes = new QLabel(centralWidget);
        Number_Nodes->setObjectName(QStringLiteral("Number_Nodes"));
        Number_Nodes->setGeometry(QRect(310, 80, 110, 13));
        Number_Nodes->setMouseTracking(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 90, 21, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 120, 31, 20));
        linet_from = new QLineEdit(centralWidget);
        linet_from->setObjectName(QStringLiteral("linet_from"));
        linet_from->setGeometry(QRect(70, 60, 113, 20));
        linet_T = new QLineEdit(centralWidget);
        linet_T->setObjectName(QStringLiteral("linet_T"));
        linet_T->setGeometry(QRect(70, 90, 113, 20));
        lineT_cost = new QLineEdit(centralWidget);
        lineT_cost->setObjectName(QStringLiteral("lineT_cost"));
        lineT_cost->setGeometry(QRect(70, 120, 113, 20));
        AddNode = new QPushButton(centralWidget);
        AddNode->setObjectName(QStringLiteral("AddNode"));
        AddNode->setGeometry(QRect(70, 150, 81, 31));
        Max_flow = new QPushButton(centralWidget);
        Max_flow->setObjectName(QStringLiteral("Max_flow"));
        Max_flow->setGeometry(QRect(320, 150, 81, 31));
        Get_paths = new QPushButton(centralWidget);
        Get_paths->setObjectName(QStringLiteral("Get_paths"));
        Get_paths->setGeometry(QRect(190, 150, 81, 31));
        Answer = new QPlainTextEdit(centralWidget);
        Answer->setObjectName(QStringLiteral("Answer"));
        Answer->setGeometry(QRect(3, 210, 431, 161));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 0, 81, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 190, 151, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 441, 21));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuOnline_Graph = new QMenu(menuBar);
        menuOnline_Graph->setObjectName(QStringLiteral("menuOnline_Graph"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuOnline_Graph->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuSettings->addAction(actionAdd_Number_of_Nodes);
        menuOnline_Graph->addAction(actionOnline_Graph);
        menuAbout->addAction(actionAbout_Developer_2);
        menuAbout->addAction(actionAbout_Program);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MaxFlow", 0));
        actionAdd_Number_of_Nodes->setText(QApplication::translate("MainWindow", "Add Number of Nodes", 0));
        actionOnline_Graph->setText(QApplication::translate("MainWindow", "Online Graph", 0));
        actionAbout_Developer->setText(QApplication::translate("MainWindow", "about Developer", 0));
        actionAbout_Developer_2->setText(QApplication::translate("MainWindow", "about Developer", 0));
        actionAbout_Program->setText(QApplication::translate("MainWindow", "about Program", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Number Of Edges :</p></body></html>", 0));
        Number_Nodes->setText(QApplication::translate("MainWindow", "0", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>From</p></body></html>", 0));
        label_3->setText(QApplication::translate("MainWindow", "To", 0));
        label_4->setText(QApplication::translate("MainWindow", "Cost", 0));
        linet_from->setInputMask(QString());
        linet_from->setText(QApplication::translate("MainWindow", "0", 0));
        linet_T->setText(QApplication::translate("MainWindow", "0", 0));
        lineT_cost->setText(QApplication::translate("MainWindow", "0", 0));
        AddNode->setText(QApplication::translate("MainWindow", "Add Node", 0));
        Max_flow->setText(QApplication::translate("MainWindow", "Max Flow", 0));
        Get_paths->setText(QApplication::translate("MainWindow", "Get All paths", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Hint : Base of the graph is zero </span></p></body></html>", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Enter graph", 0));
        menuOnline_Graph->setTitle(QApplication::translate("MainWindow", "Online ", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "about", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
