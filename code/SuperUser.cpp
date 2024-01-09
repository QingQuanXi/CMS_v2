#include "SuperUser.h"
#include "ui_SuperUser.h"

SuperUser::SuperUser(QWidget *parent)
    :QDialog(parent)
    ,ui(new Ui::SuperUser)
    ,sql("zhouDatabase")
{
    ui->setupUi(this);
    this->setWindowTitle("教室管理系统--管理员");

    //自定义窗口标题栏，标志必须与CustomizeWindowHint一起使用,否则窗口使用默认标题栏
    setWindowFlags(Qt::CustomizeWindowHint|Qt::WindowMinimizeButtonHint\
                   |Qt::WindowMaximizeButtonHint|Qt::WindowCloseButtonHint);

    //图片与文字无法同时生效
    ui->upLabel->setStyleSheet(QString("border-image:url(:/qrc/page.jpg);"));
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

SuperUser::~SuperUser()
{
    delete ui;
}

void SuperUser::on_btnAddClass_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addClassPage);
    QSqlTableModel *mod = sql.showClasstable(ui->tableView,sql.m_db,"allClass");
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setModel(mod);
}

void SuperUser::on_btnDelClass_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->delClassPage);
    QSqlTableModel *mod = sql.showClasstable(ui->tableView_2,sql.m_db,"allClass");
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_2->setModel(mod);
}

void SuperUser::on_btnSetTimetable_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->setTimetablePage);
    QSqlTableModel *mod = sql.showClasstable(ui->tableView_3,sql.m_db,"allClass");
    ui->tableView_3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_3->setModel(mod);
    ui->textEdit->setPlaceholderText("提示：在''内输入科目，没课不输入\n1 , '' , '' , '' , '' , ''\n2 , '' , '' , '' , '' , ''\n3 , '' , '' , '' , '' , ''\n4 , '' , '' , '' , '' , ''\n5 , '' , '' , '' , '' , ''\n6 , '' , '' , '' , '' , ''");
}

void SuperUser::on_btnFindTimetable_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->findTimetablePage);
    QSqlTableModel *mod = sql.showClasstable(ui->tableView_4,sql.m_db,"allClass");
    ui->tableView_4->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_4->setModel(mod);
}

void SuperUser::on_btnhome_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void SuperUser::on_btnhome_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void SuperUser::on_btnhome_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void SuperUser::on_btnhome_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void SuperUser::on_lineEdit_3_textChanged(const QString &arg1)
{
    QString tmp = arg1;
    //在数据库m_db中查找
//    QSqlTableModel *mod = sql.showTimetable(ui->tableView_3,sql.m_db,arg1);
//    ui->tableView_3->setModel(mod);
    ui->textEdit->setText("   星期一   星期二   星期三   星期四   星期五\n1 , '' , '' , '' , '' , ''\n2 , '' , '' , '' , '' , ''\n3 , '' , '' , '' , '' , ''\n4 , '' , '' , '' , '' , ''\n5 , '' , '' , '' , '' , ''\n6 , '' , '' , '' , '' , ''");
}

void SuperUser::on_pushButton_3_clicked()
{
    QString className = ui->lineEdit_3->text();
    QString text = ui->textEdit->toPlainText();
    QStringList list = text.split("\n");
    int ret = 0;
    for (int i = 0; i < list.size(); ++i)
    {
        QString value = list.at(i);
        ret = sql.m_query.exec(QString("insert into  %1 values(%2)").arg(className).arg(value));
    }
    if(ret)
    {
        QMessageBox::information(this,"提示",QString("%1教室课表设置成功").arg(className));
    }
    else
    {
        QMessageBox::information(this,"提示",QString("%1教室课表已设置或该教室不存在").arg(className));
    }
}

void SuperUser::on_pushButton_clicked()
{
    QString className = ui->lineEdit->text();
    if(className.length())
    {
        int ret = sql.m_query.exec(QString("create table %1(id int primary key,\
                                                  星期一 varchar(100),\
                                                  星期二 varchar(100),\
                                                  星期三 varchar(100),\
                                                  星期四 varchar(100),\
                                                  星期五 varchar(100))").arg(className));
        if(ret)
        {
             //添加新教室到教室表中,并刷新view
             sql.m_query.exec(QString("insert into allClass values('%1')").arg(className));
             QSqlTableModel *mod = sql.showClasstable(ui->tableView,sql.m_db,"allClass");
             ui->tableView->setModel(mod);
             QMessageBox::information(this,"提示",QString("%1教室添加成功").arg(className));
             ui->lineEdit->clear();
        }
    }
    else
    {
        QMessageBox::information(this,"提示","请输入教室名称后再保存");
    }
}

void SuperUser::on_pushButton_2_clicked()
{
    QString className = ui->lineEdit_2->text();
    if(className.length())
    {
        //删除教室
        int ret = sql.deleteTable(sql.m_query,className);
        //删除教室表中的教室
        sql.m_query.exec(QString("delete from  allClass where className='%1'").arg(className));
        if(ret)
        {
            QMessageBox::information(this,"提示",QString("%1教室删除成功").arg(className));
            //删除后刷新view
            QSqlTableModel *mod = sql.showClasstable(ui->tableView_2,sql.m_db,"allClass");
            ui->tableView_2->setModel(mod);
        }
        else
        {
            QMessageBox::information(this,"提示",QString("%1教室不存在").arg(className));
        }
        ui->lineEdit_2->clear();
    }
    else
    {
        QMessageBox::information(this,"提示","请输入教室名称后再删除");
    }
}

void SuperUser::on_pushButton_4_clicked()
{
    QString className = ui->lineEdit_4->text();
    QSqlTableModel *mod = sql.showTimetable(ui->tableView_4,sql.m_db,className);
    ui->tableView_4->setModel(mod);
}
