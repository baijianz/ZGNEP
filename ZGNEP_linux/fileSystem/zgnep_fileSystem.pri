# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
DEFINES += QT_NO_DEBUG_OUTPUT   # disable qDebug() output

SOURCES += \
    $$PWD/filedockwidget.cpp \
    $$PWD/filefilterproxymodel.cpp \
    $$PWD/filesystemmodel.cpp \
    $$PWD/filewidget.cpp \
    $$PWD/findwidget.cpp \
    $$PWD/mainwindow.cpp \
    $$PWD/navdockwidget.cpp \
    $$PWD/progressdialog.cpp \
    $$PWD/settings.cpp \
    $$PWD/treeview.cpp \
    $$PWD/zgnep_filesystem.cpp

HEADERS += \
    $$PWD/filedockwidget.h \
    $$PWD/filefilterproxymodel.h \
    $$PWD/filesystemmodel.h \
    $$PWD/filewidget.h \
    $$PWD/findwidget.h \
    $$PWD/mainwindow.h \
    $$PWD/navdockwidget.h \
    $$PWD/progressdialog.h \
    $$PWD/settings.h \
    $$PWD/treeview.h \
    $$PWD/zgnep_filesystem.h

TRANSLATIONS += \
    translations\FileManager_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
     $$PWD/FileManager.qrc \
     $$PWD/FileManager.qrc

RC_ICONS += \
     $$PWD/resources/icon_app.ico

