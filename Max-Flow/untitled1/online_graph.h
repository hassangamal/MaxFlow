#include<iostream>
#include <QDialog>
#include<QDesktopServices>
#include<QUrl>
#include<QtWebKitWidgets/QWebView>
using namespace std ;
namespace Ui {
class Online_Graph;
}

class Online_Graph : public QDialog
{
    Q_OBJECT

public:
    explicit Online_Graph(QWidget *parent = 0);
    ~Online_Graph();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Online_Graph *ui;
};
