#include "classManage.h"
#include "ui_classManage.h"
#include "LoginDialog.h"

classManage::classManage(QWidget *parent)
    :QDialog(parent)
    ,ui(new Ui::classManage)
    ,sql("zhouDatabase")
{
    ui->setupUi(this);
    this->setWindowTitle(QString("教室管理系统：%1").arg(UserName));
    //自定义窗口标题栏，标志必须与CustomizeWindowHint一起使用,否则窗口使用默认标题栏
    setWindowFlags(Qt::CustomizeWindowHint|Qt::WindowMinimizeButtonHint\
                   |Qt::WindowMaximizeButtonHint|Qt::WindowCloseButtonHint);
    ui->upLabel->setStyleSheet(QString("border-image:url(:/qrc/page.jpg);"));
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

classManage::~classManage()
{
    delete ui;
}

void classManage::on_btnFindFreeClass_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->findFreeClassPage);
}

void classManage::on_btnFindTimetable_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->findTimetablePage);
    QSqlTableModel *mod = sql.showClasstable(ui->tableView_2,sql.m_db,"allClass");
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_2->setModel(mod);
}

void classManage::on_btnApplyClass_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->applyClassPage);
    QSqlTableModel *mod = sql.showClasstable(ui->tableView_3,sql.m_db,"allClass");
    ui->tableView_3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_3->setModel(mod);
}

void classManage::on_btnReturnClass_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->returnClassPage);
    QSqlTableModel *mod = sql.showClasstable(ui->tableView_4,sql.m_db,"allClass");
    ui->tableView_4->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_4->setModel(mod);
}

void classManage::on_btnhome_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void classManage::on_btnhome_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void classManage::on_btnhome_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void classManage::on_btnhome_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void classManage::on_pushButton_2_clicked()
{
    QString className = ui->lineEdit->text();
    QSqlTableModel *mod = sql.showTimetable(ui->tableView_2,sql.m_db,className);
    ui->tableView_2->setModel(mod);
}

void classManage::on_pushButton_clicked()
{
    QString week = ui->cbxWeek->currentText();
    QString lesson = ui->cbxLesson->currentText();
    QStringList classList;
    QStringList freeList;
    sql.m_query.exec("select *from allClass");
    //获取所有教室
    while(sql.m_query.next())
    {
        QString className = sql.m_query.value(0).toString();
        qDebug()<<QString("教室:%1").arg(className);
        classList.push_back(className);
    }
    //对每个教室进行查询
    for(int i=0;i<classList.size();i++)
    {
        QString name = classList.at(i);
        sql.m_query.exec(QString("select %1 from %2 where id=%3").arg(week).arg(name).arg(lesson));
        sql.m_query.next();
        if(sql.m_query.value(0).toString().isEmpty())
        {
            freeList.push_back(name);
        }
    }
    QString str = freeList.join("、");
    str = "当前可用自习室：" + str;
    ui->textEdit->setText(str);
    //ui->textEdit->styleSheet()

}

void classManage::on_pushButton_3_clicked()
{
    QString className = ui->lineEdit_2->text();
    QSqlTableModel *mod = sql.showTimetable(ui->tableView_3,sql.m_db,className);
    ui->tableView_3->setModel(mod);
}

void classManage::on_pushButton_5_clicked()
{
    QString className = ui->lineEdit_3->text();
    QSqlTableModel *mod = sql.showTimetable(ui->tableView_4,sql.m_db,className);
    ui->tableView_4->setModel(mod);
}

void classManage::on_pushButton_4_clicked()
{
    QString className = ui->lineEdit_2->text();
    QString week = ui->cbxWeek_2->currentText();
    QString lesson = ui->cbxLesson_2->currentText();
    //reason：数据
    QString reason = ui->applyReasonEdit->text();
    if(className.isEmpty())
    {
        QMessageBox::information(this,"提示","请输入教室和申请理由后再保存");
    }

    //QT里，数据库字符串语句需要放在''中
    if(sql.m_query.exec(QString("update %1 set %2='%3' where id=%4").arg(className).arg(week).arg(reason).arg(lesson)))
    {
        QMessageBox::information(this,"提示","恭喜你申请教室成功");
    }
}

void classManage::on_pushButton_6_clicked()
{
    QString className = ui->lineEdit_3->text();
    QString week = ui->cbxWeek_3->currentText();
    QString lesson = ui->cbxLesson_3->currentText();
    if(className.isEmpty())
    {
        QMessageBox::information(this,"提示","请输入教室后再归还");
    }

    //QT里，数据库字符串语句需要放在''中
    if(sql.m_query.exec(QString("update %1 set %2='' where id=%3").arg(className).arg(week).arg(lesson)))
    {
        QMessageBox::information(this,"提示","归还教室成功");
    }
}
