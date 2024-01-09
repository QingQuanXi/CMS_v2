#-------------------------------------------------
#
# Project created by QtCreator 2019-03-14T14:54:53
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = classManage
TEMPLATE = app


SOURCES += main.cpp\
        classManage.cpp \
    LoginDialog.cpp \
    MoveDialog.cpp \
    Regist.cpp \
    ChangePassword.cpp \
    SqlOperate.cpp \
    SuperUser.cpp \
    TextScroll.cpp

HEADERS  += classManage.h \
    LoginDialog.h \
    MoveDialog.h \
    Regist.h \
    ChangePassword.h \
    SqlOperate.h \
    SuperUser.h \
    TextScroll.h

FORMS    += classManage.ui \
    LoginDialog.ui \
    Regist.ui \
    ChangePassword.ui \
    SuperUser.ui

RC_ICONS = "qrc/class.ico"

RESOURCES += \
    resource.qrc
CONFIG += resources_big
