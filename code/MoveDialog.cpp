#include "MoveDialog.h"

MoveDialog::MoveDialog(QWidget *parent)
    :QDialog(parent)
{

}

MoveDialog::~MoveDialog()
{}

void MoveDialog::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        //记录鼠标点的坐标
        dragPoint=event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}
void MoveDialog::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos()-dragPoint);
        event->accept();
    }
}


