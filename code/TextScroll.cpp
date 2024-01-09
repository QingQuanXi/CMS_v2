#include "TextScroll.h"
#include <QDebug>
#pragma execution_character_set("utf-8")

TextScroll::TextScroll(QWidget *parent)
    : QLabel(parent)
{
    setMinimumWidth(200);
    setMinimumHeight(40);


    m_curIndex = 0;//当前角码
    m_showText = "教 室 管 理 系 统";//显示的文字
    m_charWidth = fontMetrics().width("中");//每个字符的宽度

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &TextScroll::updateIndex);
    timer->start(200);
}

TextScroll::~TextScroll()
{
}

void TextScroll::paintEvent(QPaintEvent *event)
{
    __super::paintEvent(event);
    QPainter painter(this);
    painter.setPen(QColor(0, 0, 0));
    QFont font;
    font.setPointSize(30);
    font.setFamily("Microsoft YaHei");
    font.setLetterSpacing(QFont::AbsoluteSpacing,0);
    painter.setFont(font);
    //从x=0开始
    painter.drawText(0, 100, m_showText.mid(m_curIndex));
    //右边出来
    painter.drawText(width() - m_charWidth*m_curIndex, 100, m_showText.left(m_curIndex));
}


void TextScroll::updateIndex()
{
    update();
    m_curIndex++;
    if (m_curIndex*m_charWidth > width())
        m_curIndex = 0;
}
