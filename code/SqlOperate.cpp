    #include "SqlOperate.h"

SqlOperate::SqlOperate(QString dbName)
{
    QSqlDatabase db;
    if (QSqlDatabase::contains("mysql"))
    {
        //建立数据库连接
        db = QSqlDatabase::database("mysql");
    }
    else
    {
        //创建数据库
        db = QSqlDatabase::addDatabase("QSQLITE","mysql");
    }

    db.setDatabaseName(QString("%1").arg(dbName));
    if(!db.open())
    {
        QMessageBox::warning(0,"警告","数据库打开失败",QMessageBox::Cancel);
    }
    m_db = db;

    //创建表并提供初始数据
    //错误：exec无法执行，大概率是数据库语句错误
    //对db数据库进行操作
    QSqlQuery query = QSqlQuery(db);
    query.exec("create table user(username varchar(20) primary key, \
                phonenumber varchar(11), password varchar(20))");
    query.exec("insert into user values('Chen', '13912345671', '123456')");
    query.exec("insert into user values('Qin', '13912345672', '123456')");
    query.exec("insert into user values('Li', '13912345673', '123456')");
    /*
    Chen 13912345671 123456
    Qin 13912345672 123456
    Li 13912345673 123456
    Zhou 13912345674 123456
    */
    //查询后才可以获得数据
    query.exec("select * from user");
    while(query.next())
    {
        QString username = query.value(0).toString();
        QString phonenumber= query.value(1).toString();
        QString password = query.value(2).toString();
        qDebug()<<QString("name:%1  phone:%2  password:%3").arg(username).arg(phonenumber).arg(password);
    }
    qDebug()<<"-----------------------------------------------";
    //功能：清空表
    //clearTable(query,"user");
    //功能：删除表
    //deleteTable(query,"allClass");

    //创建所有教室名称表
    query.exec("create table allClass(className varchar(20) primary key)");
    m_query = query;
}
SqlOperate::~SqlOperate()
{

}

void SqlOperate::insertData(QString usertable,QString username,QString phonenumber,QString password)
{
    m_query.exec(QString("insert into %1 values('%2','%3','%4')").\
                 arg(usertable).arg(username).\
                 arg(phonenumber).\
                 arg(password));
}

void SqlOperate::closedb()
{
    m_db.close();
}

//清空表的内容，不删除表结构
void SqlOperate::clearTable(QSqlQuery query,QString tableName)
{
    int ret = query.exec(QString("delete from %1").arg(tableName));
    qDebug()<<QString("%1表已经清空").arg(tableName)<<ret;
}

int SqlOperate::deleteTable(QSqlQuery query,QString tableName)
{
    int ret = query.exec(QString("drop table %1").arg(tableName));
    if(ret)
    {
        qDebug()<<QString("%1表已经删除").arg(tableName);
        return ret;
    }
    else
    {
        return ret;
    }

}

QSqlTableModel* SqlOperate::showTimetable(QObject *parent,QSqlDatabase db,QString tableName)
{
    QSqlTableModel *model = new QSqlTableModel(parent,db);
    model->setTable(QString("%1").arg(tableName));  //选表
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);  //选编辑策略
    model->select();  //选取整个表的所有行
    model->removeColumn(0);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("星期一"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("星期二"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("星期三"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("星期四"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("星期五"));
    return model;
}

QSqlTableModel* SqlOperate::showClasstable(QObject *parent,QSqlDatabase db,QString tableName)
{
    QSqlTableModel *model = new QSqlTableModel(parent,db);
    model->setTable(QString("%1").arg(tableName));  //选表
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);  //选编辑策略
    model->select();  //选取整个表的所有行
    //model->removeColumn(0);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("所有教室"));
    return model;
}











