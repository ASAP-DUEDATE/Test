#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "crecvfile.h"
#include <QMessageBox>
#include <QTcpServer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"服务器主线程:"<<QThread::currentThread();
    m_p_TcpServer=new QTcpServer(this);
    connect(m_p_TcpServer,&QTcpServer::newConnection,this,[=](){
        QTcpSocket *p_TcpSocket=m_p_TcpServer->nextPendingConnection();
        CRecvFile *p_t_RecvFile=new CRecvFile(p_TcpSocket);
        p_t_RecvFile->start();

        connect(p_t_RecvFile,&CRecvFile::signal_Stop_SentFile,this,[=](){
            p_t_RecvFile->exit();
            p_t_RecvFile->wait();
            p_t_RecvFile->deleteLater();
            QMessageBox::information(this,"文件接收","文件接收完毕!!!");
        });

    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_StartListening_clicked()
{
    unsigned short port=ui->lineEdit_Port->text().toUShort();
    m_p_TcpServer->listen(QHostAddress::Any,port);
}

