#include "classManage.h"
#include <QApplication>
#include <QDialog>
#include <QRegion>
#include <QIcon>
#include "LoginDialog.h"

/*
 * 1.教室管理系统
 * 2.管理员/用户(SuperUser.cpp  classManage.cpp)
 * 3.登录框、注册框、修改密码框
 * 4.MoveDialog：无边框的移动
 * 5.TextScroll：label提升的类，用来字母的滚动
 * 6.SqlOperate：数据库操作
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog loginDialog;
    a.setWindowIcon(QIcon(":/qrc/class.ico"));

    if(loginDialog.exec()==QDialog::Accepted)  //子窗口阻塞，直到关闭，才运行主窗口
    {
        return a.exec();
    }
    else  return 0;
}
