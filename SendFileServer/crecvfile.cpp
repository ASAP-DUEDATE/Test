#include "crecvfile.h"
#include <QTcpSocket>
#include <QFile>
CRecvFile::CRecvFile(QTcpSocket *tcpSocket,QObject *parent)
    : QThread{parent}
{

    m_p_TcpSocket=tcpSocket;

}

void CRecvFile::run()
{
    QFile *p_File=new QFile("recv.txt");
    p_File->open(QFile::ReadOnly);
    //接收数据
    connect(m_p_TcpSocket,&QTcpSocket::readyRead,this,[=](){
        static int count=0;
        static int total=0;
        if(0==count){
            m_p_TcpSocket->read((char*)&total,4);
        }
        QByteArray data_All=m_p_TcpSocket->readAll();
        count+=data_All.size();
        p_File->write(data_All);
        if(count==total){
            m_p_TcpSocket->close();
            m_p_TcpSocket->deleteLater();
            p_File->close();
            p_File->deleteLater();
            emit signal_Stop_SentFile();
        }
    });

    exec();

}
