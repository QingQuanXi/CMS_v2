#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <MoveDialog.h>
#include <QtSql>
#include <SqlOperate.h>
#include <classManage.h>
#include <ChangePassword.h>
#include <Regist.h>
#include <QApplication>
#include <QDir>
#include <QGraphicsDropShadowEffect>
#include "Login.h"
#include "SuperUser.h"

extern QString UserName;

namespace Ui {
class LoginDialog;
}

class LoginDialog : public MoveDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    //无作用
    void keyPressEvent(QKeyEvent *event);

public slots:
    void on_btnClose_clicked();

    void on_btnZoom_clicked();

    void on_btnSafeLogin_clicked();

    void on_btnRegist_clicked();

    void on_btnFindPassword_clicked();

private slots:
    void on_btnRemember_stateChanged(int arg1);
private:
    QString    m_Username;
    QString    m_Password;
    QString    str_1;
    QString    str_2;
    bool       m_Remember;
    SqlOperate sql;
private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
