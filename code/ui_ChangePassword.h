/********************************************************************************
** Form generated from reading UI file 'ChangePassword.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *userEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *passwardEdit;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *saveRegist;

    void setupUi(QWidget *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(968, 586);
        verticalLayout_4 = new QVBoxLayout(ChangePassword);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame_5 = new QFrame(ChangePassword);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMinimumSize(QSize(0, 100));
        frame_5->setMaximumSize(QSize(16777215, 100));
        frame_5->setSizeIncrement(QSize(0, 0));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(840, 20, 40, 40));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-image: url(:/qrc/button_min);\n"
"	background-color: rgba(255, 170, 225, 60);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/qrc/button_min_hover);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(frame_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(890, 20, 40, 40));
        pushButton_2->setMinimumSize(QSize(40, 40));
        pushButton_2->setMaximumSize(QSize(40, 40));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-image: url(:/qrc/button_close);\n"
"	background-color: rgba(255, 170, 225, 60);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/qrc/button_close_hover);\n"
"}\n"
""));
        label = new QLabel(frame_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 10, 80, 90));
        label->setMinimumSize(QSize(80, 90));
        label->setMaximumSize(QSize(80, 90));

        verticalLayout_4->addWidget(frame_5);

        frame = new QFrame(ChangePassword);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(100, 0, 120, 0);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);


        verticalLayout->addWidget(frame_4);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 0));
        frame_3->setMaximumSize(QSize(16777215, 240));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 24));
        label_4->setMaximumSize(QSize(16777215, 24));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);

        horizontalLayout_6->addWidget(label_4);

        userEdit = new QLineEdit(frame_3);
        userEdit->setObjectName(QStringLiteral("userEdit"));
        userEdit->setMinimumSize(QSize(0, 40));
        userEdit->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        userEdit->setFont(font2);
        userEdit->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255,40%);\n"
"border:1px solid #b9babb;"));

        horizontalLayout_6->addWidget(userEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 24));
        label_5->setMaximumSize(QSize(16777215, 24));
        label_5->setFont(font1);

        horizontalLayout_7->addWidget(label_5);

        phoneEdit = new QLineEdit(frame_3);
        phoneEdit->setObjectName(QStringLiteral("phoneEdit"));
        phoneEdit->setMinimumSize(QSize(0, 40));
        phoneEdit->setMaximumSize(QSize(16777215, 40));
        phoneEdit->setFont(font2);
        phoneEdit->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 40%);\n"
"border:1px solid #b9babb;"));

        horizontalLayout_7->addWidget(phoneEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(29);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 24));
        label_6->setMaximumSize(QSize(16777215, 24));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_6);

        passwardEdit = new QLineEdit(frame_3);
        passwardEdit->setObjectName(QStringLiteral("passwardEdit"));
        passwardEdit->setMinimumSize(QSize(0, 40));
        passwardEdit->setMaximumSize(QSize(16777215, 40));
        passwardEdit->setFont(font2);
        passwardEdit->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 40%);\n"
"border:1px solid #b9babb;"));

        horizontalLayout_8->addWidget(passwardEdit);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(frame_3);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, 0, 30);
        saveRegist = new QPushButton(frame_2);
        saveRegist->setObjectName(QStringLiteral("saveRegist"));
        saveRegist->setMinimumSize(QSize(100, 50));
        saveRegist->setMaximumSize(QSize(100, 50));
        saveRegist->setFont(font2);
        saveRegist->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 40%);\n"
"border:1px solid #b9babb;"));

        horizontalLayout_4->addWidget(saveRegist);


        verticalLayout->addWidget(frame_2);


        verticalLayout_4->addWidget(frame);


        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QWidget *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "Form", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QApplication::translate("ChangePassword", "TextLabel", 0));
        label_7->setText(QApplication::translate("ChangePassword", "\344\277\256 \346\224\271 \345\257\206 \347\240\201", 0));
        label_4->setText(QApplication::translate("ChangePassword", "\347\224\250\346\210\267\345\220\215", 0));
        userEdit->setPlaceholderText(QApplication::translate("ChangePassword", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0));
        label_5->setText(QApplication::translate("ChangePassword", "\346\211\213\346\234\272\345\217\267", 0));
        phoneEdit->setPlaceholderText(QApplication::translate("ChangePassword", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", 0));
        label_6->setText(QApplication::translate("ChangePassword", "\345\257\206\347\240\201", 0));
        passwardEdit->setPlaceholderText(QApplication::translate("ChangePassword", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", 0));
        saveRegist->setText(QApplication::translate("ChangePassword", "\344\277\235\345\255\230", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
