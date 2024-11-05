#ifndef CRECVFILE_H
#define CRECVFILE_H

#include <QThread>
class QTcpSocket;
class CRecvFile : public QThread
{
    Q_OBJECT
public:
    explicit CRecvFile(QTcpSocket *tcpSocket,QObject *parent = nullptr);

protected:
    void run() override;
private:
    QTcpSocket *m_p_TcpSocket;
signals:
    void signal_Stop_SentFile();
};

#endif // CRECVFILE_H
