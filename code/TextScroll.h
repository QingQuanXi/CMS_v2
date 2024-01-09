#ifndef TEXTSCROLL_H
#define TEXTSCROLL_H
#include <QLabel>
#include <QTimer>
#include <QPainter>


class TextScroll : public QLabel
{
    Q_OBJECT


public:
    TextScroll(QWidget *parent = 0);
    ~TextScroll();


protected:
    void paintEvent(QPaintEvent *event);
    void updateIndex();


private:
    int m_charWidth;
    int m_curIndex;
    QString m_showText;
};

#endif // TEXTSCROLL_H

