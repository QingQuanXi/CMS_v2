#ifndef SUPERUSER_H
#define SUPERUSER_H

#include <QWidget>
#include <QDialog>
#include <QMessageBox>
#include "TextScroll.h"
#include "SqlOperate.h"
#pragma execution_character_set("utf-8")

namespace Ui {
class SuperUser;
}

class SuperUser : public QDialog
{
    Q_OBJECT

public:
    explicit SuperUser(QWidget *parent = 0);
    ~SuperUser();

private slots:
    void on_btnAddClass_clicked();

    void on_btnDelClass_clicked();

    void on_btnSetTimetable_clicked();

    void on_btnFindTimetable_clicked();

    void on_btnhome_clicked();

    void on_btnhome_2_clicked();

    void on_btnhome_3_clicked();

    void on_btnhome_4_clicked();

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_pushButton_3_clicked();

    //创建新表，并将新表名称添加到教室表中(allClass)
    void on_pushButton_clicked();
    //删除表，并将表从教室表中删除(allCalss)
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::SuperUser *ui;
    SqlOperate sql;
};

#endif // SUPERUSER_H
