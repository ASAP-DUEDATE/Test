#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "csentfile.h"

#include <QThread>
#include <QMessageBox>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_IP->setText("127.0.0.1");
    ui->lineEdit_Port->setText("8989");
    QThread *p_t_SentFile=new QThread;
    CSentFile *p_SentFile=new CSentFile;

    p_SentFile->moveToThread(p_t_SentFile);


    //开始连接
    connect(this,&MainWindow::signal_StartConnectToServer,p_SentFile,&CSentFile::connectToServer);

    //发送文件信号
    connect(this,&MainWindow::signal_StartSendFile,p_SentFile,&CSentFile::sendFileToServer);

    //发送文件进度修改
    connect(p_SentFile,&CSentFile::signal_Date_Sended_Percent,ui->progressBar_SentFile,&QProgressBar::setValue);
    //处理线程发送的信号
    connect(p_SentFile,&CSentFile::signal_Connect_Success,this,[=](){
        QMessageBox::information(this,"连接服务器","连接服务器成功!!!");

    });
    connect(p_SentFile,&CSentFile::signal_Connect_Over,this,[=](){
        p_t_SentFile->quit();
        p_t_SentFile->wait();

        p_SentFile->deleteLater();
        p_t_SentFile->deleteLater();

        QMessageBox::information(this,"断开服务器","已断开服务器!!!");

    });



    p_t_SentFile->start();




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ConnectToServer_clicked()
{
    QString ip=ui->lineEdit_IP->text();
    unsigned short port=ui->lineEdit_Port->text().toUShort();
    emit signal_StartConnectToServer(port,ip);
}

void MainWindow::on_pushButton_ChooseFile_clicked()
{
    QString filePath=QFileDialog::getOpenFileName();
    if(0==filePath.size()){
        QMessageBox::warning(this,"打开文件","选择的文件路径不能为空!");
        return;
    }
    ui->lineEdit_ChooseFile->setText(filePath);


}

void MainWindow::on_pushButton_SentFile_clicked()
{
    emit signal_StartSendFile(ui->lineEdit_ChooseFile->text());

}



