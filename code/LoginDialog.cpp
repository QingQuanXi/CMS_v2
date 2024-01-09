#include "LoginDialog.h"
#include "ui_LoginDialog.h"
#include <QLineEdit>
#include <QTimer>
#include <QPalette>
#include <QBrush>
#include <QPainter>
#include <QFont>
#include <QMessageBox>
#include <QShortcut>
#include <QKeyEvent>
#include <QMovie>
#include <QSettings>
#include<QDebug>

QString UserName;

#pragma execution_character_set("utf-8")

LoginDialog::LoginDialog(QWidget *parent)
    :MoveDialog(parent)
    ,ui(new Ui::LoginDialog)
    ,sql("zhouDatabase")
{
    ui->setupUi(this);

    setAttribute(Qt::WA_TranslucentBackground);//背景透明
    //设置无边框,点击图标栏可放大缩小
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint\
                   |Qt::WindowMinimizeButtonHint|Qt::WindowMaximizeButtonHint);

    //qDebug()<<windowFlags();  //可查看关于window窗口属性
    ui->editUsername->setPlaceholderText("请输入账号");
    ui->editPassword->setPlaceholderText("请输入密码");

    //密码显示黑圆圈
    ui->editPassword->setEchoMode(QLineEdit::Password);

    //label中显示图片，图片自适应大小
    //ui->labHead->setPixmap(QPixmap(":/qrc/Head.png"));
    //ui->labHead->setScaledContents(true);

    //label添加动态图片
    QMovie *movie=new QMovie();
    ui->labHead->setMovie(movie);
    ui->labHead->setScaledContents(true);
    movie->start();

    //拿到控件的字体属性，设置字间距
    QFont font = ui->btnSafeLogin->font();
    font.setLetterSpacing(QFont::AbsoluteSpacing ,15);
    ui->btnSafeLogin->setFont(font);

    ui->btnClose->setToolTip("关闭");
    ui->btnZoom->setToolTip("最小化");

    //记住密码：读取配置文件
    QSettings setting("userInfo/config.ini",QSettings::IniFormat);
    m_Username = setting.value("Login/userName").toString();
    ui->editUsername->setText(m_Username);
    m_Password = setting.value("Login/passWord").toString();
    ui->editPassword->setText(m_Password);
    m_Remember = setting.value("Login/remeber").toBool();
    //上次勾选，则初始化为已勾选，否则不设置
    if(m_Remember)
    {
        ui->btnRemember->setChecked(true);
    }
    else
    {
        ui->editPassword->clear();
    }
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::keyPressEvent(QKeyEvent *event)
{
    //判断是否是回车键按下(小键盘，大键盘)
    if( event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return )
    {
        on_btnSafeLogin_clicked();
    }
}

void LoginDialog::on_btnClose_clicked()
{

    this->close();
}

//最小化
void LoginDialog::on_btnZoom_clicked()
{

    this->setWindowState(Qt::WindowMinimized);
}

void LoginDialog::on_btnSafeLogin_clicked()
{
   str_1 = ui->editUsername->text();
   str_2 = ui->editPassword->text();

   if(str_1 == Q_NULLPTR)
   {
       QMessageBox::information(this,"提示","请你输入账号后再登录");
       return;
   }
   if(str_2 == Q_NULLPTR)
   {
       QMessageBox::information(this,"提示","请你输入密码后再登录");
       return;
   }

   //手动设置此账号为超级用户
   if(str_1 == "Zhou" && str_2 == "123456")
   {
       //存储正确的用户名与密码，并在此写入
       m_Username = str_1;
       m_Password = str_2;
       on_btnRemember_stateChanged(1);

       this->close();
       //超级用户
       SuperUser *superUser = new SuperUser;
       superUser->exec();
       return;
   }
   if(sql.m_query.exec(QString("select username from user where username = '%1'")\
                            .arg(str_1)))
   {
       sql.m_query.next();
       QString result = sql.m_query.value(0).toString();
       if(result=="")
       {
           QMessageBox::warning(this, tr("警告"), tr("用户名不存在!")); return;
       }
   }
   if(sql.m_query.exec(QString("select username from user where username = '%1' and password = '%2'")\
                                    .arg(str_1).arg(str_2)))
   {
       sql.m_query.next();
       QString tmp = sql.m_query.value(0).toString();
       //用户名密码正确
       if(tmp!="")
       {
           m_Username = str_1;
           m_Password = str_2;
           on_btnRemember_stateChanged(1);
           this->close();
           UserName = m_Username;
           //老师、学生
           classManage *classmange = new classManage;
           classmange->exec();
       }
       else
       {
           QMessageBox::warning(this,"警告","密码不正确");
       }
   }
}

void LoginDialog::on_btnRegist_clicked()
{
    Regist *registInfo=new Regist;
    registInfo->exec();
}

void LoginDialog::on_btnFindPassword_clicked()
{
    ChangePassword *changePsd=new ChangePassword;
    changePsd->exec();
}

//在登录框中检测是否点击记住密码
void LoginDialog::on_btnRemember_stateChanged(int arg1)
{
    QString binPath = QDir::currentPath();

    //勾选进行存储
    if(arg1=ui->btnRemember->isChecked())
    {
        QSettings setting("userInfo/config.ini",QSettings::IniFormat);//读配置文件
        setting.beginGroup(tr("Login"));
        setting.setValue("userName",m_Username);//设置key和value，也就是参数和值
        setting.setValue("passWord",m_Password);
        setting.setValue("remeber",true);
        setting.endGroup();//节点结束
        qDebug()<<"记住密码";
    }
    //不勾选则清除账号密码存储。
    else
    {
        QSettings setting("userInfo/config.ini",QSettings::IniFormat);//读配置文件
        setting.beginGroup(tr("Login"));
        setting.setValue("passWord","");
        setting.setValue("remeber",false);
        setting.endGroup();//节点结束
        qDebug()<<"不记住密码";
    }
}
