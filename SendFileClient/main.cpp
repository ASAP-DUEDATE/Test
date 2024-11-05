#include "mainwindow.h"

#include <QApplication>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     QString styleSheet =
        "QMessageBox {"
        "   background-color: #f0f0f0;"
        "   color: #333;"
        "   border: 1px solid #ccc;"
        "   border-radius: 10px;"
        "}"
        "QMessageBox QPushButton {"
        "   border-radius: 5px;"
        "   background-color: #007AFF;"
        "   color: white;"
        "}"
        "QMessageBox QPushButton:hover {"
        "   background-color: #0051A1;"
        "}";
    a.setStyleSheet(styleSheet);
    MainWindow w;
    w.show();
    return a.exec();
}
