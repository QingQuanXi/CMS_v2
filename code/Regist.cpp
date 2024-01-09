#include "Regist.h"
#include "ui_Regist.h"
#include <QRegExp>

Regist::Regist(QWidget *parent) :
    MoveDialog(parent),
    ui(new Ui::Regist),
    sql("zhouDatabase")
{
    ui->setupUi(this);
    this->setWindowTitle("注册账号");
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint\
                   |Qt::WindowMinimizeButtonHint|Qt::WindowMaximizeButtonHint);

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/qrc/RegistBack.jpg").scaled(this->size(),\
                                                          Qt::IgnoreAspectRatio,\
                                                          Qt::SmoothTransformation)));
    this->setPalette(palette);

    //设置动态图片
    QMovie *movie=new QMovie();
    ui->movielabel->setMovie(movie);
    ui->movielabel->setScaledContents(true);
    movie->start();

    ui->pushButton->setToolTip("最小化");
    ui->pushButton_2->setToolTip("关闭");

    ui->userEdit->setMaxLength(10);
    ui->phoneEdit->setMaxLength(11);
    ui->passwardEdit->setMaxLength(12);
}

Regist::~Regist()
{
    delete ui;
}


void Regist::on_saveRegist_clicked()
{
    //用户格式检索:是否空、空格、是否已经注册
    if(ui->userEdit->text()==Q_NULLPTR)
    {
        QMessageBox::information(this,"提示","请输入账号后再保存");return;
    }
    for (int i = 0; i < ui->userEdit->text().size(); i++)
    {
        if (ui->userEdit->text()[i] == ' ' )
        {
            QMessageBox::warning(this, tr("警告"), tr("用户名不能含空格!")); return;
        }
    }
    sql.m_query.exec(QString("select username from user where username = '%1'")\
                                        .arg(ui->userEdit->text()));
    sql.m_query.next();
    QString tmp = sql.m_query.value(0).toString();
    if(tmp!="")
    {
        QMessageBox::warning(this, tr("警告"), tr("用户名已注册!")); return;
    }


    //手机号检索：是否空、长度、格式(正则匹配表达式)
    if(ui->phoneEdit->text()==Q_NULLPTR)
    {
        QMessageBox::information(this,"提示","请输入手机号后再保存");return;
    }
    if(ui->phoneEdit->text().size()!=11)
    {
        QMessageBox::warning(this, tr("警告"), tr("手机号长度错误")); return;
    }
    QRegExp re("^((13[0-9])|(14[5,7])|(15[0-3,5-9])|(17[0,3,5-8])|(18[0-9])|166|198|199|(147))\\d{8}$");
    if(!re.exactMatch(ui->phoneEdit->text()))
    {
        QMessageBox::warning(this, tr("警告"), tr("手机号格式不正确")); return;
    }


    //密码检索：是否空
    if(ui->passwardEdit->text()==Q_NULLPTR)
    {
        QMessageBox::information(this,"提示","请输入密码后再保存");
    }
    if(ui->passwardEdit->text()!=Q_NULLPTR)
    {
        sql.insertData("user",ui->userEdit->text(),ui->phoneEdit->text(),\
                                    ui->passwardEdit->text());
        QMessageBox::information(this,"提示","注册账号成功");
        this->close();
    }
}

void Regist::on_pushButton_clicked()
{
    this->setWindowState(Qt::WindowMinimized);
}

void Regist::on_pushButton_2_clicked()
{
    this->close();
}
