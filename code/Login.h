#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>

class Login:public QObject
{
public:
    Login();
    ~Login();
public:
    QString username();
    QString password();
    bool remember();
private:
    QString    m_Username;
    QString    m_Password;
    bool       m_Remember;
};

#endif // LOGIN_H
