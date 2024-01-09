#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>
#include <QDialog>
#include <QDir>
#include <QMessageBox>
#include <QMovie>
#include "MoveDialog.h"
#include "SqlOperate.h"

#pragma execution_character_set("utf-8")

namespace Ui {
class ChangePassword;
}

class ChangePassword : public MoveDialog
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = 0);
    ~ChangePassword();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_saveRegist_clicked();

private:
    Ui::ChangePassword *ui;
    SqlOperate sql;
};

#endif // CHANGEPASSWORD_H
