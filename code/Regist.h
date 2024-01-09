#ifndef REGIST_H
#define REGIST_H

#include <QWidget>
#include <QDialog>
#include <QSqlQuery>
#include <QDir>
#include <QMessageBox>
#include <QMovie>
#include "MoveDialog.h"
#include "SqlOperate.h"
#pragma execution_character_set("utf-8")

namespace Ui {
class Regist;
}

class Regist : public MoveDialog
{
    Q_OBJECT

public:
    explicit Regist(QWidget *parent = 0);
    ~Regist();

private slots:
    void on_saveRegist_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Regist *ui;
    SqlOperate sql;
};

#endif // REGIST_H
