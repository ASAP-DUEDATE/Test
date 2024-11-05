/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_Port;
    QLabel *label_2;
    QLineEdit *lineEdit_IP;
    QPushButton *pushButton_ConnectToServer;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_ChooseFile;
    QPushButton *pushButton_ChooseFile;
    QSpacerItem *verticalSpacer_2;
    QProgressBar *progressBar_SentFile;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_SentFile;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: 14px \"Helvetica Neue\"; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    color: #333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"}"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_Port = new QLineEdit(centralwidget);
        lineEdit_Port->setObjectName("lineEdit_Port");
        lineEdit_Port->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #C0C0C0; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0A84FF; /* \350\201\232\347\204\246\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}"));

        gridLayout->addWidget(lineEdit_Port, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: 14px \"Helvetica Neue\"; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    color: #333; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"}"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_IP = new QLineEdit(centralwidget);
        lineEdit_IP->setObjectName("lineEdit_IP");
        lineEdit_IP->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #C0C0C0; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0A84FF; /* \350\201\232\347\204\246\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}"));

        gridLayout->addWidget(lineEdit_IP, 0, 1, 1, 1);

        pushButton_ConnectToServer = new QPushButton(centralwidget);
        pushButton_ConnectToServer->setObjectName("pushButton_ConnectToServer");
        pushButton_ConnectToServer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0A84FF; /* \346\214\211\351\222\256\351\242\234\350\211\262 */\n"
"    color: white; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 10px 20px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font: 16px \"Helvetica Neue\"; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #007AFF; /* \346\202\254\345\201\234\346\227\266\351\242\234\350\211\262 */\n"
"}"));

        gridLayout->addWidget(pushButton_ConnectToServer, 0, 2, 2, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_ChooseFile = new QLineEdit(widget);
        lineEdit_ChooseFile->setObjectName("lineEdit_ChooseFile");
        lineEdit_ChooseFile->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #C0C0C0; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0A84FF; /* \350\201\232\347\204\246\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}"));

        horizontalLayout->addWidget(lineEdit_ChooseFile);

        pushButton_ChooseFile = new QPushButton(widget);
        pushButton_ChooseFile->setObjectName("pushButton_ChooseFile");
        pushButton_ChooseFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0A84FF; /* \346\214\211\351\222\256\351\242\234\350\211\262 */\n"
"    color: white; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 10px 20px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font: 16px \"Helvetica Neue\"; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #007AFF; /* \346\202\254\345\201\234\346\227\266\351\242\234\350\211\262 */\n"
"}"));

        horizontalLayout->addWidget(pushButton_ChooseFile);


        verticalLayout->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        progressBar_SentFile = new QProgressBar(centralwidget);
        progressBar_SentFile->setObjectName("progressBar_SentFile");
        progressBar_SentFile->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"    border-radius: 10px; /* \346\233\264\345\244\247\347\232\204\345\234\206\350\247\222 */\n"
"    background-color: #E0E0E0; /* \346\233\264\346\237\224\345\222\214\347\232\204\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #0A84FF; /* \346\233\264\344\272\256\347\232\204\350\277\233\345\272\246\351\242\234\350\211\262 */\n"
"    border-radius: 10px; /* \347\273\237\344\270\200\345\234\206\350\247\222 */\n"
"}\n"
"\n"
""));
        progressBar_SentFile->setValue(0);
        progressBar_SentFile->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(progressBar_SentFile);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_SentFile = new QPushButton(centralwidget);
        pushButton_SentFile->setObjectName("pushButton_SentFile");
        pushButton_SentFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0A84FF; /* \346\214\211\351\222\256\351\242\234\350\211\262 */\n"
"    color: white; /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 10px 20px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font: 16px \"Helvetica Neue\"; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #007AFF; /* \346\202\254\345\201\234\346\227\266\351\242\234\350\211\262 */\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_SentFile);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        lineEdit_Port->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        lineEdit_IP->setText(QString());
        pushButton_ConnectToServer->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        pushButton_ChooseFile->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        pushButton_SentFile->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
