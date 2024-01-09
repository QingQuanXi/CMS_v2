/********************************************************************************
** Form generated from reading UI file 'classManage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSMANAGE_H
#define UI_CLASSMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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

class Ui_classManage
{
public:
    QVBoxLayout *vboxLayout;
    TextScroll *upLabel;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QGridLayout *gridLayout;
    QPushButton *btnFindFreeClass;
    QPushButton *btnFindTimetable;
    QPushButton *btnApplyClass;
    QPushButton *btnReturnClass;
    QWidget *findFreeClassPage;
    QFrame *frame;
    QFrame *frame_10;
    QLabel *label;
    QComboBox *cbxWeek;
    QComboBox *cbxLesson;
    QPushButton *pushButton;
    QPushButton *btnhome;
    QLabel *label_5;
    QTextEdit *textEdit;
    QWidget *findTimetablePage;
    QFrame *frame_3;
    QFrame *frame_4;
    QPushButton *btnhome_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QTableView *tableView_2;
    QWidget *applyClassPage;
    QFrame *frame_5;
    QTableView *tableView_3;
    QFrame *frame_9;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *btnhome_3;
    QPushButton *pushButton_4;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *cbxWeek_2;
    QLabel *label_7;
    QComboBox *cbxLesson_2;
    QLabel *label_8;
    QLineEdit *applyReasonEdit;
    QWidget *returnClassPage;
    QFrame *frame_7;
    QTableView *tableView_4;
    QFrame *frame_11;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *btnhome_4;
    QFrame *frame_13;
    QLabel *label_9;
    QComboBox *cbxWeek_3;
    QLabel *label_10;
    QComboBox *cbxLesson_3;

    void setupUi(QWidget *classManage)
    {
        if (classManage->objectName().isEmpty())
            classManage->setObjectName(QStringLiteral("classManage"));
        classManage->resize(850, 700);
        classManage->setMinimumSize(QSize(850, 700));
        classManage->setMaximumSize(QSize(850, 700));
        vboxLayout = new QVBoxLayout(classManage);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        upLabel = new TextScroll(classManage);
        upLabel->setObjectName(QStringLiteral("upLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(upLabel->sizePolicy().hasHeightForWidth());
        upLabel->setSizePolicy(sizePolicy);
        upLabel->setMinimumSize(QSize(0, 180));
        upLabel->setMaximumSize(QSize(16777215, 180));
        upLabel->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(upLabel);

        stackedWidget = new QStackedWidget(classManage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        homePage = new QWidget();
        homePage->setObjectName(QStringLiteral("homePage"));
        gridLayout = new QGridLayout(homePage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnFindFreeClass = new QPushButton(homePage);
        btnFindFreeClass->setObjectName(QStringLiteral("btnFindFreeClass"));
        btnFindFreeClass->setMinimumSize(QSize(200, 70));
        btnFindFreeClass->setMaximumSize(QSize(200, 70));
        btnFindFreeClass->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(btnFindFreeClass, 0, 0, 1, 1);

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

        gridLayout->addWidget(btnFindTimetable, 1, 0, 1, 1);

        btnApplyClass = new QPushButton(homePage);
        btnApplyClass->setObjectName(QStringLiteral("btnApplyClass"));
        btnApplyClass->setMinimumSize(QSize(200, 70));
        btnApplyClass->setMaximumSize(QSize(200, 70));
        btnApplyClass->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(btnApplyClass, 2, 0, 1, 1);

        btnReturnClass = new QPushButton(homePage);
        btnReturnClass->setObjectName(QStringLiteral("btnReturnClass"));
        btnReturnClass->setMinimumSize(QSize(200, 70));
        btnReturnClass->setMaximumSize(QSize(200, 70));
        btnReturnClass->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(btnReturnClass, 3, 0, 1, 1);

        stackedWidget->addWidget(homePage);
        findFreeClassPage = new QWidget();
        findFreeClassPage->setObjectName(QStringLiteral("findFreeClassPage"));
        frame = new QFrame(findFreeClassPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 811, 501));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_10 = new QFrame(frame);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(10, 10, 811, 52));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_10);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 95, 30));
        label->setMinimumSize(QSize(95, 30));
        label->setMaximumSize(QSize(95, 30));
        cbxWeek = new QComboBox(frame_10);
        cbxWeek->setObjectName(QStringLiteral("cbxWeek"));
        cbxWeek->setGeometry(QRect(300, 10, 95, 30));
        cbxWeek->setMinimumSize(QSize(95, 30));
        cbxWeek->setMaximumSize(QSize(95, 30));
        cbxLesson = new QComboBox(frame_10);
        cbxLesson->setObjectName(QStringLiteral("cbxLesson"));
        cbxLesson->setGeometry(QRect(500, 10, 95, 30));
        cbxLesson->setMinimumSize(QSize(95, 30));
        cbxLesson->setMaximumSize(QSize(95, 30));
        pushButton = new QPushButton(frame_10);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(690, 10, 95, 30));
        pushButton->setMinimumSize(QSize(95, 30));
        pushButton->setMaximumSize(QSize(95, 30));
        btnhome = new QPushButton(frame_10);
        btnhome->setObjectName(QStringLiteral("btnhome"));
        btnhome->setGeometry(QRect(20, 10, 95, 30));
        btnhome->setMinimumSize(QSize(95, 30));
        btnhome->setMaximumSize(QSize(95, 30));
        label_5 = new QLabel(frame_10);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(410, 15, 81, 21));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 70, 771, 401));
        textEdit->setStyleSheet(QString::fromUtf8("font-size:24px;\n"
"color:red;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        stackedWidget->addWidget(findFreeClassPage);
        findTimetablePage = new QWidget();
        findTimetablePage->setObjectName(QStringLiteral("findTimetablePage"));
        frame_3 = new QFrame(findTimetablePage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(20, 20, 781, 481));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(10, 20, 761, 51));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnhome_2 = new QPushButton(frame_4);
        btnhome_2->setObjectName(QStringLiteral("btnhome_2"));
        btnhome_2->setGeometry(QRect(0, 10, 95, 30));
        btnhome_2->setMinimumSize(QSize(95, 30));
        btnhome_2->setMaximumSize(QSize(95, 30));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 10, 95, 30));
        label_2->setMinimumSize(QSize(95, 30));
        label_2->setMaximumSize(QSize(95, 30));
        lineEdit = new QLineEdit(frame_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(360, 10, 95, 30));
        lineEdit->setMinimumSize(QSize(95, 30));
        lineEdit->setMaximumSize(QSize(95, 30));
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 10, 95, 30));
        pushButton_2->setMinimumSize(QSize(95, 30));
        pushButton_2->setMaximumSize(QSize(95, 30));
        tableView_2 = new QTableView(frame_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 90, 761, 381));
        tableView_2->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(findTimetablePage);
        applyClassPage = new QWidget();
        applyClassPage->setObjectName(QStringLiteral("applyClassPage"));
        frame_5 = new QFrame(applyClassPage);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(20, 20, 781, 481));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        tableView_3 = new QTableView(frame_5);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(10, 80, 761, 331));
        frame_9 = new QFrame(frame_5);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(10, 20, 761, 51));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 10, 95, 30));
        label_3->setMinimumSize(QSize(95, 30));
        label_3->setMaximumSize(QSize(95, 30));
        lineEdit_2 = new QLineEdit(frame_9);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(360, 10, 95, 30));
        lineEdit_2->setMinimumSize(QSize(95, 30));
        lineEdit_2->setMaximumSize(QSize(95, 30));
        pushButton_3 = new QPushButton(frame_9);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(550, 10, 95, 30));
        pushButton_3->setMinimumSize(QSize(95, 30));
        pushButton_3->setMaximumSize(QSize(95, 30));
        btnhome_3 = new QPushButton(frame_9);
        btnhome_3->setObjectName(QStringLiteral("btnhome_3"));
        btnhome_3->setGeometry(QRect(10, 10, 93, 28));
        pushButton_4 = new QPushButton(frame_9);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(660, 10, 95, 30));
        pushButton_4->setMinimumSize(QSize(95, 30));
        pushButton_4->setMaximumSize(QSize(95, 30));
        frame_12 = new QFrame(frame_5);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(0, 420, 781, 54));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_12);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(frame_12);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(95, 30));
        label_6->setMaximumSize(QSize(95, 30));

        horizontalLayout->addWidget(label_6);

        cbxWeek_2 = new QComboBox(frame_12);
        cbxWeek_2->setObjectName(QStringLiteral("cbxWeek_2"));
        cbxWeek_2->setMinimumSize(QSize(95, 30));
        cbxWeek_2->setMaximumSize(QSize(95, 30));

        horizontalLayout->addWidget(cbxWeek_2);

        label_7 = new QLabel(frame_12);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        cbxLesson_2 = new QComboBox(frame_12);
        cbxLesson_2->setObjectName(QStringLiteral("cbxLesson_2"));
        cbxLesson_2->setMinimumSize(QSize(95, 30));
        cbxLesson_2->setMaximumSize(QSize(95, 30));

        horizontalLayout->addWidget(cbxLesson_2);

        label_8 = new QLabel(frame_12);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        applyReasonEdit = new QLineEdit(frame_12);
        applyReasonEdit->setObjectName(QStringLiteral("applyReasonEdit"));
        applyReasonEdit->setMaximumSize(QSize(16777215, 30));
        applyReasonEdit->setSizeIncrement(QSize(0, 30));

        horizontalLayout->addWidget(applyReasonEdit);

        stackedWidget->addWidget(applyClassPage);
        returnClassPage = new QWidget();
        returnClassPage->setObjectName(QStringLiteral("returnClassPage"));
        frame_7 = new QFrame(returnClassPage);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(10, 20, 811, 481));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        tableView_4 = new QTableView(frame_7);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(10, 90, 781, 331));
        frame_11 = new QFrame(frame_7);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(10, 30, 791, 51));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_11);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 10, 95, 30));
        label_4->setMinimumSize(QSize(95, 30));
        label_4->setMaximumSize(QSize(95, 30));
        lineEdit_3 = new QLineEdit(frame_11);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(360, 10, 95, 30));
        lineEdit_3->setMinimumSize(QSize(95, 30));
        lineEdit_3->setMaximumSize(QSize(95, 30));
        pushButton_5 = new QPushButton(frame_11);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 10, 95, 30));
        pushButton_5->setMinimumSize(QSize(95, 30));
        pushButton_5->setMaximumSize(QSize(95, 30));
        pushButton_6 = new QPushButton(frame_11);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 10, 95, 30));
        pushButton_6->setMinimumSize(QSize(95, 30));
        pushButton_6->setMaximumSize(QSize(95, 30));
        btnhome_4 = new QPushButton(frame_11);
        btnhome_4->setObjectName(QStringLiteral("btnhome_4"));
        btnhome_4->setGeometry(QRect(0, 10, 93, 28));
        frame_13 = new QFrame(frame_7);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setGeometry(QRect(10, 420, 781, 54));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_13);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(12, 12, 95, 30));
        label_9->setMinimumSize(QSize(95, 30));
        label_9->setMaximumSize(QSize(95, 30));
        cbxWeek_3 = new QComboBox(frame_13);
        cbxWeek_3->setObjectName(QStringLiteral("cbxWeek_3"));
        cbxWeek_3->setGeometry(QRect(114, 12, 95, 30));
        cbxWeek_3->setMinimumSize(QSize(95, 30));
        cbxWeek_3->setMaximumSize(QSize(95, 30));
        label_10 = new QLabel(frame_13);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(216, 20, 75, 16));
        cbxLesson_3 = new QComboBox(frame_13);
        cbxLesson_3->setObjectName(QStringLiteral("cbxLesson_3"));
        cbxLesson_3->setGeometry(QRect(300, 12, 95, 30));
        cbxLesson_3->setMinimumSize(QSize(95, 30));
        cbxLesson_3->setMaximumSize(QSize(95, 30));
        stackedWidget->addWidget(returnClassPage);

        vboxLayout->addWidget(stackedWidget);


        retranslateUi(classManage);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(classManage);
    } // setupUi

    void retranslateUi(QWidget *classManage)
    {
        classManage->setWindowTitle(QApplication::translate("classManage", "classManage", 0));
        upLabel->setText(QString());
        btnFindFreeClass->setText(QApplication::translate("classManage", "1.\346\237\245\350\257\242\350\207\252\344\271\240\345\256\244", 0));
        btnFindTimetable->setText(QApplication::translate("classManage", "2.\346\237\245\350\257\242\350\257\276\350\241\250", 0));
        btnApplyClass->setText(QApplication::translate("classManage", "3.\347\224\263\350\257\267\346\225\231\345\256\244", 0));
        btnReturnClass->setText(QApplication::translate("classManage", "4.\345\275\222\350\277\230\346\225\231\345\256\244", 0));
        label->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\346\227\266\351\227\264", 0));
        cbxWeek->clear();
        cbxWeek->insertItems(0, QStringList()
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\270\200", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\272\214", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\270\211", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\345\233\233", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\272\224", 0)
        );
        cbxLesson->clear();
        cbxLesson->insertItems(0, QStringList()
         << QApplication::translate("classManage", "1", 0)
         << QApplication::translate("classManage", "2", 0)
         << QApplication::translate("classManage", "3", 0)
         << QApplication::translate("classManage", "4", 0)
         << QApplication::translate("classManage", "5", 0)
         << QApplication::translate("classManage", "6", 0)
        );
        pushButton->setText(QApplication::translate("classManage", "\346\237\245\350\257\242", 0));
        btnhome->setText(QApplication::translate("classManage", "\351\246\226\351\241\265", 0));
        label_5->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\350\212\202\346\225\260", 0));
        btnhome_2->setText(QApplication::translate("classManage", "\351\246\226\351\241\265", 0));
        label_2->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\346\225\231\345\256\244", 0));
        pushButton_2->setText(QApplication::translate("classManage", "\346\237\245\350\257\242", 0));
        label_3->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\346\225\231\345\256\244", 0));
        pushButton_3->setText(QApplication::translate("classManage", "\347\274\226\350\276\221", 0));
        btnhome_3->setText(QApplication::translate("classManage", "\351\246\226\351\241\265", 0));
        pushButton_4->setText(QApplication::translate("classManage", "\347\224\263\350\257\267", 0));
        label_6->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\345\221\250\345\207\240", 0));
        cbxWeek_2->clear();
        cbxWeek_2->insertItems(0, QStringList()
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\270\200", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\272\214", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\270\211", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\345\233\233", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\272\224", 0)
        );
        label_7->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\350\212\202\346\225\260", 0));
        cbxLesson_2->clear();
        cbxLesson_2->insertItems(0, QStringList()
         << QApplication::translate("classManage", "1", 0)
         << QApplication::translate("classManage", "2", 0)
         << QApplication::translate("classManage", "3", 0)
         << QApplication::translate("classManage", "4", 0)
         << QApplication::translate("classManage", "5", 0)
         << QApplication::translate("classManage", "6", 0)
        );
        label_8->setText(QApplication::translate("classManage", "\347\224\263\350\257\267\347\220\206\347\224\261", 0));
        applyReasonEdit->setPlaceholderText(QApplication::translate("classManage", "\344\276\213\357\274\2325\346\234\21012\345\217\267\357\274\214\344\277\241\346\201\257151\345\274\200\347\217\255\344\274\232", 0));
        label_4->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\346\225\231\345\256\244", 0));
        pushButton_5->setText(QApplication::translate("classManage", "\347\274\226\350\276\221", 0));
        pushButton_6->setText(QApplication::translate("classManage", "\345\275\222\350\277\230", 0));
        btnhome_4->setText(QApplication::translate("classManage", "\351\246\226\351\241\265", 0));
        label_9->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\345\221\250\345\207\240", 0));
        cbxWeek_3->clear();
        cbxWeek_3->insertItems(0, QStringList()
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\270\200", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\272\214", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\270\211", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\345\233\233", 0)
         << QApplication::translate("classManage", "\346\230\237\346\234\237\344\272\224", 0)
        );
        label_10->setText(QApplication::translate("classManage", "\350\257\267\350\276\223\345\205\245\350\212\202\346\225\260", 0));
        cbxLesson_3->clear();
        cbxLesson_3->insertItems(0, QStringList()
         << QApplication::translate("classManage", "1", 0)
         << QApplication::translate("classManage", "2", 0)
         << QApplication::translate("classManage", "3", 0)
         << QApplication::translate("classManage", "4", 0)
         << QApplication::translate("classManage", "5", 0)
         << QApplication::translate("classManage", "6", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class classManage: public Ui_classManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSMANAGE_H
