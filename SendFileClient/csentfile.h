#ifndef CSENTFILE_H
#define CSENTFILE_H

#include <QObject>
class QTcpSocket;
class CSentFile : public QObject
{
    Q_OBJECT
public:
    explicit CSentFile(QObject *parent = nullptr);

    void connectToServer(unsigned short port,QString ip);   //连接到服务器

    void sendFileToServer(QString path);                      //发送文件



signals:
    void signal_Connect_Success();
    void signal_Connect_Over();
    void signal_Date_Sended_Percent(int num);

private:
    QTcpSocket *m_p_TcpSocket;

};

#endif // CSENTFILE_H
