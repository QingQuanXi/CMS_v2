#include "ChangePassword.h"
#include "ui_ChangePassword.h"
#include <QRegExp>

ChangePassword::ChangePassword(QWidget *parent) :
    MoveDialog(parent),
    ui(new Ui::ChangePassword),
    sql("zhouDatabase")
{
    ui->setupUi(this);
    this->setWindowTitle("修改密码");
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint\
                   |Qt::WindowMinimizeButtonHint|Qt::WindowMaximizeButtonHint);

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/qrc/ChangePassBack.jpg").\
                                                 scaled(this->size(),\
                                                 Qt::IgnoreAspectRatio,\
                                                 Qt::SmoothTransformation)));
    this->setPalette(palette);

    QMovie *movie=new QMovie();
    ui->label->setMovie(movie);
    ui->label->setScaledContents(true);
    movie->start();

    ui->pushButton->setToolTip("最小化");
    ui->pushButton_2->setToolTip("关闭");

    ui->userEdit->setMaxLength(10);
    ui->phoneEdit->setMaxLength(11);
}

ChangePassword::~ChangePassword()
{
    delete ui;
}

void ChangePassword::on_pushButton_clicked()
{
    this->setWindowState(Qt::WindowMinimized);
}

void ChangePassword::on_pushButton_2_clicked()
{
    this->close();
}

void ChangePassword::on_saveRegist_clicked()
{
    QString userStr = ui->userEdit->text();
    QString phoneStr = ui->phoneEdit->text();
    QString passwordStr = ui->passwardEdit->text();
    if(userStr == Q_NULLPTR)
    {
        QMessageBox::information(this,"提示","请输入用户名再保存");
        return;
    }
    for (int i = 0; i < userStr.size(); i++)
    {
        if (userStr[i] == ' ' )
        {
            QMessageBox::warning(this, tr("警告"), tr("用户名不能含空格!")); return;
        }
    }
    sql.m_query.exec(QString("select username from user where username = '%1'")\
                                        .arg(userStr));
    sql.m_query.next();
    QString result = sql.m_query.value(0).toString();
    if(result=="")
    {
        QMessageBox::warning(this, tr("警告"), tr("用户名不存在!")); return;
    }

    if(phoneStr == Q_NULLPTR)
    {
        QMessageBox::information(this,"提示","请输入手机号再保存");
        return;
    }
    if(phoneStr.size()!=11)
    {
        QMessageBox::warning(this, tr("警告"), tr("手机号长度错误"));
        return;
    }

    if(passwordStr == Q_NULLPTR)
    {
        QMessageBox::information(this,"提示","请输入新密码再保存");
        return;
    }

    //1.用户名手机号都能匹配，修改密码
    else if(sql.m_query.exec(QString("select username from user where username = '%1' and\
                                               phonenumber = '%2' ").arg(userStr).arg(phoneStr)))
    {
        sql.m_query.next();
        QString tmp = sql.m_query.value(0).toString();
        if(tmp != "")
        {
            sql.m_query.exec(QString("update user set password = '%1' where username = '%2'")\
                             .arg(passwordStr).arg(userStr));
            QMessageBox::information(this,"提示","修改密码成功");
            this->close();
        }
        else
        {
            QMessageBox::warning(this,"警告","用户名或手机号不正确，请检查后再试");
        }
    }
}
