#include "csentfile.h"
#include <QFile>
#include <QFileInfo>
#include <QTcpSocket>


CSentFile::CSentFile(QObject *parent)
    : QObject{parent}
{}

void CSentFile::connectToServer(unsigned short port, QString ip)
{
    m_p_TcpSocket=new QTcpSocket;
    m_p_TcpSocket->connectToHost(QHostAddress(ip),port);

    //连接成功
    connect(m_p_TcpSocket,&QTcpSocket::connected,this,&CSentFile::signal_Connect_Success);

    //断开连接
    connect(m_p_TcpSocket,&QTcpSocket::disconnected,this,[=](){
        m_p_TcpSocket->close();
        m_p_TcpSocket->deleteLater();
        emit signal_Connect_Over();
    });




}

void CSentFile::sendFileToServer(QString path)
{

    QFile file(path);
    QFileInfo file_Info(path);
    int file_Size=file_Info.size();
    file.open(QFile::ReadOnly);
    while(!file.atEnd()){
        static int num=0;
        if(0==num){
            m_p_TcpSocket->write((char *)&file_Size,4);
        }
       QByteArray data_Line= file.readLine();
       num+=data_Line.size();
       int data_Sended_Perent=(num*100)/file_Size;
       emit signal_Date_Sended_Percent(data_Sended_Perent);
       m_p_TcpSocket->write(data_Line);
    }




}
