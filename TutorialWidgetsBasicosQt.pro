QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buttondialog.cpp \
    checkboxdialog.cpp \
    comboboxdialog.cpp \
    containerdialog.cpp \
    datetimedialog.cpp \
    emaildialog.cpp \
    main.cpp \
    mainwindow.cpp \
    radiobuttondialog.cpp \
    spinboxdialog.cpp

HEADERS += \
    buttondialog.h \
    checkboxdialog.h \
    comboboxdialog.h \
    containerdialog.h \
    datetimedialog.h \
    emaildialog.h \
    mainwindow.h \
    radiobuttondialog.h \
    spinboxdialog.h

FORMS += \
    buttondialog.ui \
    checkboxdialog.ui \
    comboboxdialog.ui \
    containerdialog.ui \
    datetimedialog.ui \
    emaildialog.ui \
    mainwindow.ui \
    radiobuttondialog.ui \
    spinboxdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
