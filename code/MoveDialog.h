#ifndef MOVEDIALOG_H
#define MOVEDIALOG_H
#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include <QEvent>
#include <QWidget>


//左键按住对话框进行移动
class MoveDialog:public QDialog
{
    Q_OBJECT
public:
    explicit  MoveDialog(QWidget *partent=0);
    ~MoveDialog();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
private:
    //记录坐标
    QPoint dragPoint;
};

#endif // MOVEDIALOG_H
