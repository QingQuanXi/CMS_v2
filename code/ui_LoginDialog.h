/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnZoom;
    QPushButton *btnClose;
    QFrame *frame_3;
    QLabel *labTitle;
    QFrame *frame_4;
    QFrame *frame_7;
    QLineEdit *editUsername;
    QPushButton *btnRegist;
    QLineEdit *editPassword;
    QPushButton *btnFindPassword;
    QLabel *labHead;
    QFrame *frame_2;
    QCheckBox *btnRemember;
    QCheckBox *btnAuto;
    QPushButton *btnSafeLogin;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(534, 410);
        LoginDialog->setMinimumSize(QSize(534, 410));
        LoginDialog->setMaximumSize(QSize(534, 410));
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(LoginDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("#widget{\n"
"border-image:url(:/qrc/LoginBack.jpg);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, 0, -1);
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 70));
        frame->setMaximumSize(QSize(16777215, 70));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(426, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnZoom = new QPushButton(frame);
        btnZoom->setObjectName(QStringLiteral("btnZoom"));
        btnZoom->setMinimumSize(QSize(28, 28));
        btnZoom->setMaximumSize(QSize(28, 28));
        btnZoom->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-image: url(:/qrc/button_min);\n"
"	background-color: rgba(255, 170, 225, 120);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/qrc/button_min_hover);\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(btnZoom);

        btnClose = new QPushButton(frame);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setMinimumSize(QSize(28, 28));
        btnClose->setMaximumSize(QSize(28, 28));
        btnClose->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-image: url(:/qrc/button_close);\n"
"	background-color: rgba(255, 170, 225, 120);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/qrc/button_close_hover);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout_3->addWidget(frame);

        frame_3 = new QFrame(widget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        labTitle = new QLabel(frame_3);
        labTitle->setObjectName(QStringLiteral("labTitle"));
        labTitle->setGeometry(QRect(100, 10, 321, 51));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        labTitle->setFont(font);

        verticalLayout_3->addWidget(frame_3);

        frame_4 = new QFrame(widget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(130, 10, 341, 81));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        editUsername = new QLineEdit(frame_7);
        editUsername->setObjectName(QStringLiteral("editUsername"));
        editUsername->setGeometry(QRect(20, 10, 191, 31));
        editUsername->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255,70%);\n"
"border:1px solid #b9babb;"));
        btnRegist = new QPushButton(frame_7);
        btnRegist->setObjectName(QStringLiteral("btnRegist"));
        btnRegist->setGeometry(QRect(220, 10, 93, 28));
        btnRegist->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255,70%);\n"
"border:1px solid #b9babb;"));
        editPassword = new QLineEdit(frame_7);
        editPassword->setObjectName(QStringLiteral("editPassword"));
        editPassword->setGeometry(QRect(20, 50, 191, 31));
        editPassword->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255,70%);\n"
"border:1px solid #b9babb;"));
        btnFindPassword = new QPushButton(frame_7);
        btnFindPassword->setObjectName(QStringLiteral("btnFindPassword"));
        btnFindPassword->setGeometry(QRect(220, 50, 93, 28));
        btnFindPassword->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255,70%);\n"
"border:1px solid #b9babb;"));
        labHead = new QLabel(frame_4);
        labHead->setObjectName(QStringLiteral("labHead"));
        labHead->setGeometry(QRect(50, 20, 71, 71));
        labHead->setPixmap(QPixmap(QString::fromUtf8(":/qrc/head.jpg")));
        labHead->setScaledContents(false);

        verticalLayout_3->addWidget(frame_4);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        btnRemember = new QCheckBox(frame_2);
        btnRemember->setObjectName(QStringLiteral("btnRemember"));
        btnRemember->setGeometry(QRect(150, 0, 91, 19));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        btnRemember->setFont(font1);
        btnRemember->setStyleSheet(QStringLiteral("color:rgb(0, 170, 255)"));
        btnAuto = new QCheckBox(frame_2);
        btnAuto->setObjectName(QStringLiteral("btnAuto"));
        btnAuto->setGeometry(QRect(250, 0, 91, 19));
        btnAuto->setFont(font1);
        btnAuto->setStyleSheet(QStringLiteral("color:rgb(0, 170, 255)"));
        btnSafeLogin = new QPushButton(frame_2);
        btnSafeLogin->setObjectName(QStringLiteral("btnSafeLogin"));
        btnSafeLogin->setGeometry(QRect(150, 30, 191, 31));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        btnSafeLogin->setFont(font2);
        btnSafeLogin->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color:rgba(255, 255 , 255,70%);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    color:rgb(97 , 179 , 246);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color:rgb(0 , 109 , 176);\n"
"}\n"
""));

        verticalLayout_3->addWidget(frame_2);


        verticalLayout->addWidget(widget);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        btnZoom->setText(QString());
        btnClose->setText(QString());
        labTitle->setText(QApplication::translate("LoginDialog", "\346\225\231\345\256\244\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        btnRegist->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214\350\264\246\345\217\267", 0));
        btnFindPassword->setText(QApplication::translate("LoginDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        labHead->setText(QString());
        btnRemember->setText(QApplication::translate("LoginDialog", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        btnAuto->setText(QApplication::translate("LoginDialog", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        btnSafeLogin->setText(QApplication::translate("LoginDialog", "\345\256\211\345\205\250\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
