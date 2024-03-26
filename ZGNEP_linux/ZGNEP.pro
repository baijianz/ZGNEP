QT       += core gui
QT       += concurrent   #并行

QT       += multimedia  #多媒体
QT       += multimediawidgets

#用pri文件来管理文件目录
include(./device/zgnep_peripheral.pri)
include(./messageBox/zgnep_messageBox.pri)
include(./whiteBoard/zgnep_whiteBoard.pri)
include(./pdf/zgnep_pdf.pri)
include(./cover/zgnep_cover.pri)
include(./fileSystem/zgnep_fileSystem.pri)
include(./multiMedia/zgnep_multiMedia.pri)
include(./photo/zgnep_photo.pri)
include(./text/zgnep_text.pri)
include(./word/zgnep_word.pri)
include(./ppt/zgnep_ppt.pri)
include(./calc/zgnep_calc.pri)
include(./setting/zgnep_setting.pri)
include(./account/zgnep_account.pri)
include(./loading/zgnep_loading.pri)
include(./course/zgnep_course.pri)
include(./calendar/zgnep_calendar.pri)
include(./admin/zgnep_admin.pri)

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

CONFIG += debug # 调试开关
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    zgnep_admin.cpp \
    zgnep_init.cpp \
    zgnep_main.cpp \
    zgnep_start.cpp

HEADERS += \
    zgnep_admin.h \
    zgnep_init.h \
    zgnep_main.h \
    zgnep_start.h

FORMS += \
    zgnep_admin.ui \
    zgnep_main.ui \
    zgnep_start.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ZGNEP_SRC.qrc


DISTFILES += \
    device/led/readme \
    device/readme





#虚拟机
unix:!macx: LIBS += -L$$PWD/pdf/lib/ -lQt5Pdfium
INCLUDEPATH += $$PWD/pdf/include
DEPENDPATH += $$PWD/pdf/include


#开发版
#unix:!macx: LIBS += -L$$PWD/pdf/lib/arm/ -lQt5Pdfium
#INCLUDEPATH += $$PWD/pdf/lib/arm
#DEPENDPATH += $$PWD/pdf/lib/arm
