#ifndef SQLOPERATE_H
#define SQLOPERATE_H
#include <QSqlDatabase>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QTableView>
#pragma execution_character_set("utf-8")

class SqlOperate
{
public:
    SqlOperate(QString dbName);
    ~SqlOperate();
    void insertData(QString usertable,QString username,QString phonenumber,QString password);
    void clearTable(QSqlQuery query,QString tableName);
    int deleteTable(QSqlQuery query,QString tableName);
    void closedb();
    //打印课表
    QSqlTableModel* showTimetable(QObject *parent,QSqlDatabase db,QString tableName);
    //打印教室表
    QSqlTableModel* showClasstable(QObject *parent,QSqlDatabase db,QString tableName);
public:
    QSqlQuery m_query;
    QSqlDatabase m_db;


};

#endif // SQLOPERATE_H
