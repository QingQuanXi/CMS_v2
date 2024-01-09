/********************************************************************************
** Form generated from reading UI file 'SuperUser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERUSER_H
#define UI_SUPERUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <TextScroll.h>

QT_BEGIN_NAMESPACE

class Ui_SuperUser
{
public:
    QVBoxLayout *verticalLayout;
    TextScroll *upLabel;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QGridLayout *gridLayout;
    QPushButton *btnAddClass;
    QPushButton *btnDelClass;
    QPushButton *btnSetTimetable;
    QPushButton *btnFindTimetable;
    QWidget *addClassPage;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QTableView *tableView;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *btnhome;
    QWidget *delClassPage;
    QFrame *frame_3;
    QFrame *frame_4;
    QPushButton *btnhome_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QTableView *tableView_2;
    QWidget *setTimetablePage;
    QFrame *frame_5;
    QFrame *frame_6;
    QPushButton *btnhome_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QTableView *tableView_3;
    QTextEdit *textEdit;
    QWidget *findTimetablePage;
    QFrame *frame_7;
    QFrame *frame_8;
    QPushButton *btnhome_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QTableView *tableView_4;

    void setupUi(QWidget *SuperUser)
    {
        if (SuperUser->objectName().isEmpty())
            SuperUser->setObjectName(QStringLiteral("SuperUser"));
        SuperUser->resize(819, 593);
        SuperUser->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(SuperUser);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        upLabel = new TextScroll(SuperUser);
        upLabel->setObjectName(QStringLiteral("upLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(upLabel->sizePolicy().hasHeightForWidth());
        upLabel->setSizePolicy(sizePolicy);
        upLabel->setMinimumSize(QSize(0, 180));
        upLabel->setMaximumSize(QSize(16777215, 180));
        upLabel->setStyleSheet(QStringLiteral(""));
        upLabel->setFrameShape(QFrame::NoFrame);
        upLabel->setAlignment(Qt::AlignCenter);
        upLabel->setWordWrap(false);

        verticalLayout->addWidget(upLabel);

        stackedWidget = new QStackedWidget(SuperUser);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setFocusPolicy(Qt::NoFocus);
        stackedWidget->setAcceptDrops(false);
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QStringLiteral(""));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Plain);
        homePage = new QWidget();
        homePage->setObjectName(QStringLiteral("homePage"));
        homePage->setStyleSheet(QLatin1String("QWidget{\n"
"background:rgba(255,255,255,1);\n"
"}"));
        gridLayout = new QGridLayout(homePage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnAddClass = new QPushButton(homePage);
        btnAddClass->setObjectName(QStringLiteral("btnAddClass"));
        btnAddClass->setEnabled(true);
        btnAddClass->setMinimumSize(QSize(200, 70));
        btnAddClass->setMaximumSize(QSize(200, 70));
        btnAddClass->setFocusPolicy(Qt::NoFocus);
        btnAddClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnAddClass->setLayoutDirection(Qt::LeftToRight);
        btnAddClass->setAutoFillBackground(false);
        btnAddClass->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color:rgba(255, 255 , 255,70%);\n"
"	font: bold 20px;\n"
"	border:3px solid red;\n"
"    border-radius:8px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgba(255, 0 , 0,5%);\n"
"    color:rgb(0 , 0 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color:rgb(0 , 109 , 176);\n"
"}"));
        btnAddClass->setInputMethodHints(Qt::ImhNone);
        btnAddClass->setAutoRepeatDelay(300);
        btnAddClass->setAutoDefault(false);

        gridLayout->addWidget(btnAddClass, 0, 0, 1, 1);

        btnDelClass = new QPushButton(homePage);
        btnDelClass->setObjectName(QStringLiteral("btnDelClass"));
        btnDelClass->setMinimumSize(QSize(200, 70));
        btnDelClass->setMaximumSize(QSize(200, 70));
        btnDelClass->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color:rgba(255, 255 , 255,70%);\n"
"	font: bold 20px;\n"
"	border:3px solid red;\n"
"    border-radius:8px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgba(255, 0 , 0,5%);\n"
"    color:rgb(0 , 0 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color:rgb(0 , 109 , 176);\n"
"}"));

        gridLayout->addWidget(btnDelClass, 1, 0, 1, 1);

        btnSetTimetable = new QPushButton(homePage);
        btnSetTimetable->setObjectName(QStringLiteral("btnSetTimetable"));
        btnSetTimetable->setMinimumSize(QSize(200, 70));
        btnSetTimetable->setMaximumSize(QSize(200, 70));
        btnSetTimetable->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color:rgba(255, 255 , 255,70%);\n"
"	font: bold 20px;\n"
"	border:3px solid red;\n"
"    border-radius:8px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgba(255, 0 , 0,5%);\n"
"    color:rgb(0 , 0 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color:rgb(0 , 109 , 176);\n"
"}"));

        gridLayout->addWidget(btnSetTimetable, 2, 0, 1, 1);

        btnFindTimetable = new QPushButton(homePage);
        btnFindTimetable->setObjectName(QStringLiteral("btnFindTimetable"));
        btnFindTimetable->setMinimumSize(QSize(200, 70));
        btnFindTimetable->setMaximumSize(QSize(200, 70));
        btnFindTimetable->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    background-color:rgba(255, 255 , 255,70%);\n"
"	font: bold 20px;\n"
"	border:3px solid red;\n"
"    border-radius:8px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgba(255, 0 , 0,5%);\n"
"    color:rgb(0 , 0 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color:rgb(0 , 109 , 176);\n"
"}"));

        gridLayout->addWidget(btnFindTimetable, 3, 0, 1, 1);

        stackedWidget->addWidget(homePage);
        addClassPage = new QWidget();
        addClassPage->setObjectName(QStringLiteral("addClassPage"));
        verticalLayout_2 = new QVBoxLayout(addClassPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_2 = new QFrame(addClassPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 100, 771, 281));
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 771, 71));
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 10, 130, 30));
        label_2->setMinimumSize(QSize(130, 30));
        label_2->setMaximumSize(QSize(130, 30));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(340, 10, 130, 30));
        lineEdit->setMinimumSize(QSize(130, 30));
        lineEdit->setMaximumSize(QSize(130, 30));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 10, 130, 30));
        pushButton->setMinimumSize(QSize(130, 30));
        pushButton->setMaximumSize(QSize(130, 30));
        btnhome = new QPushButton(frame);
        btnhome->setObjectName(QStringLiteral("btnhome"));
        btnhome->setGeometry(QRect(0, 10, 130, 30));
        btnhome->setMinimumSize(QSize(130, 30));
        btnhome->setMaximumSize(QSize(130, 30));

        verticalLayout_2->addWidget(frame_2);

        stackedWidget->addWidget(addClassPage);
        delClassPage = new QWidget();
        delClassPage->setObjectName(QStringLiteral("delClassPage"));
        frame_3 = new QFrame(delClassPage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 791, 391));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 10, 781, 51));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnhome_2 = new QPushButton(frame_4);
        btnhome_2->setObjectName(QStringLiteral("btnhome_2"));
        btnhome_2->setGeometry(QRect(10, 10, 130, 30));
        btnhome_2->setMinimumSize(QSize(130, 30));
        btnhome_2->setMaximumSize(QSize(130, 30));
        label = new QLabel(frame_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 130, 30));
        label->setMinimumSize(QSize(130, 30));
        label->setMaximumSize(QSize(130, 30));
        lineEdit_2 = new QLineEdit(frame_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(340, 10, 130, 30));
        lineEdit_2->setMinimumSize(QSize(130, 30));
        lineEdit_2->setMaximumSize(QSize(130, 30));
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(640, 10, 130, 30));
        pushButton_2->setMinimumSize(QSize(130, 30));
        pushButton_2->setMaximumSize(QSize(130, 30));
        tableView_2 = new QTableView(frame_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 70, 771, 301));
        tableView_2->setStyleSheet(QLatin1String("QTableView{\n"
"        border:none;\n"
"        background:white;\n"
"}\n"
"QTableView::item:selected{\n"
"        color:white;\n"
"        background:rgb(34, 175, 75);    \n"
"}"));
        stackedWidget->addWidget(delClassPage);
        setTimetablePage = new QWidget();
        setTimetablePage->setObjectName(QStringLiteral("setTimetablePage"));
        setTimetablePage->setStyleSheet(QStringLiteral(""));
        frame_5 = new QFrame(setTimetablePage);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 10, 791, 391));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(10, 10, 771, 61));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        btnhome_3 = new QPushButton(frame_6);
        btnhome_3->setObjectName(QStringLiteral("btnhome_3"));
        btnhome_3->setGeometry(QRect(0, 10, 130, 30));
        btnhome_3->setMinimumSize(QSize(130, 30));
        btnhome_3->setMaximumSize(QSize(130, 30));
        label_3 = new QLabel(frame_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 20, 72, 15));
        lineEdit_3 = new QLineEdit(frame_6);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(320, 10, 130, 30));
        lineEdit_3->setMinimumSize(QSize(130, 30));
        lineEdit_3->setMaximumSize(QSize(130, 30));
        pushButton_3 = new QPushButton(frame_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(640, 10, 130, 30));
        pushButton_3->setMinimumSize(QSize(130, 30));
        pushButton_3->setMaximumSize(QSize(130, 30));
        tableView_3 = new QTableView(frame_5);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(10, 80, 181, 301));
        textEdit = new QTextEdit(frame_5);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(200, 80, 571, 301));
        QFont font1;
        font1.setPointSize(14);
        textEdit->setFont(font1);
        stackedWidget->addWidget(setTimetablePage);
        findTimetablePage = new QWidget();
        findTimetablePage->setObjectName(QStringLiteral("findTimetablePage"));
        findTimetablePage->setStyleSheet(QLatin1String("#findTimetablePage{\n"
"background:rgba(255,255,255,1);\n"
"}"));
        frame_7 = new QFrame(findTimetablePage);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(10, 20, 781, 381));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(0, 10, 771, 61));
        sizePolicy1.setHeightForWidth(frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy1);
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        btnhome_4 = new QPushButton(frame_8);
        btnhome_4->setObjectName(QStringLiteral("btnhome_4"));
        btnhome_4->setGeometry(QRect(10, 10, 130, 30));
        btnhome_4->setMinimumSize(QSize(130, 30));
        btnhome_4->setMaximumSize(QSize(130, 30));
        label_4 = new QLabel(frame_8);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 20, 72, 15));
        lineEdit_4 = new QLineEdit(frame_8);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(330, 10, 130, 30));
        lineEdit_4->setMinimumSize(QSize(130, 30));
        lineEdit_4->setMaximumSize(QSize(130, 30));
        pushButton_4 = new QPushButton(frame_8);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(640, 10, 130, 30));
        pushButton_4->setMinimumSize(QSize(130, 30));
        pushButton_4->setMaximumSize(QSize(130, 30));
        tableView_4 = new QTableView(frame_7);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(10, 80, 761, 291));
        stackedWidget->addWidget(findTimetablePage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(SuperUser);

        stackedWidget->setCurrentIndex(3);
        btnAddClass->setDefault(false);


        QMetaObject::connectSlotsByName(SuperUser);
    } // setupUi

    void retranslateUi(QWidget *SuperUser)
    {
        SuperUser->setWindowTitle(QApplication::translate("SuperUser", "Form", 0));
        upLabel->setText(QString());
        btnAddClass->setText(QApplication::translate("SuperUser", "1.\346\267\273\345\212\240\346\226\260\346\225\231\345\256\244", 0));
        btnDelClass->setText(QApplication::translate("SuperUser", "2.\345\210\240\351\231\244\346\225\231\345\256\244", 0));
        btnSetTimetable->setText(QApplication::translate("SuperUser", "3.\350\256\276\347\275\256\350\257\276\350\241\250", 0));
        btnFindTimetable->setText(QApplication::translate("SuperUser", "4.\346\237\245\350\257\242\346\225\231\345\256\244\347\247\237\347\224\250\346\203\205\345\206\265", 0));
        label_2->setText(QApplication::translate("SuperUser", "\346\267\273\345\212\240\346\225\231\345\256\244\345\220\215\347\247\260", 0));
        pushButton->setText(QApplication::translate("SuperUser", "\344\277\235\345\255\230", 0));
        btnhome->setText(QApplication::translate("SuperUser", "\351\246\226\351\241\265", 0));
        btnhome_2->setText(QApplication::translate("SuperUser", "\351\246\226\351\241\265", 0));
        label->setText(QApplication::translate("SuperUser", "\345\210\240\351\231\244\346\225\231\345\256\244\345\220\215\347\247\260", 0));
        pushButton_2->setText(QApplication::translate("SuperUser", "\344\277\235\345\255\230", 0));
        btnhome_3->setText(QApplication::translate("SuperUser", "\351\246\226\351\241\265", 0));
        label_3->setText(QApplication::translate("SuperUser", "\350\257\267\350\276\223\345\205\245\346\225\231\345\256\244", 0));
        pushButton_3->setText(QApplication::translate("SuperUser", "\344\277\235\345\255\230", 0));
        textEdit->setHtml(QApplication::translate("SuperUser", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEdit->setPlaceholderText(QString());
        btnhome_4->setText(QApplication::translate("SuperUser", "\351\246\226\351\241\265", 0));
        label_4->setText(QApplication::translate("SuperUser", "\350\257\267\350\276\223\345\205\245\346\225\231\345\256\244", 0));
        pushButton_4->setText(QApplication::translate("SuperUser", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class SuperUser: public Ui_SuperUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERUSER_H
