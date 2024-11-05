#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void signal_StartConnectToServer(unsigned short,QString);
    void signal_StartSendFile(QString);
private slots:

    void on_pushButton_ConnectToServer_clicked();

    void on_pushButton_SentFile_clicked();

    void on_pushButton_ChooseFile_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
