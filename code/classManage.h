#ifndef CLASSMANAGE_H
#define CLASSMANAGE_H

#include <QWidget>
#include <QDialog>
#include <QMessageBox>
#include "TextScroll.h"
#include "SqlOperate.h"
#pragma execution_character_set("utf-8")

namespace Ui {
class classManage;
}

class classManage:public QDialog
{
    Q_OBJECT

public:
    explicit classManage(QWidget *parent = 0);
    ~classManage();

private slots:

    void on_btnFindFreeClass_clicked();

    void on_btnFindTimetable_clicked();

    void on_btnApplyClass_clicked();

    void on_btnReturnClass_clicked();

    //首页按钮
    void on_btnhome_clicked();
    void on_btnhome_2_clicked();
    void on_btnhome_3_clicked();
    void on_btnhome_4_clicked();

    //查询课表
    void on_pushButton_2_clicked();

    //查询自习室
    void on_pushButton_clicked();

    //申请教室：编辑按钮->展示课表
    void on_pushButton_3_clicked();
    //归还教室：编辑按钮->展示课表
    void on_pushButton_5_clicked();
    //申请教室：保存按钮
    void on_pushButton_4_clicked();
    //归还教室：归还按钮
    void on_pushButton_6_clicked();

private:
    Ui::classManage *ui;
    SqlOperate sql;
};

#endif // CLASSMANAGE_H
