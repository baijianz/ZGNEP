#ifndef ZGNEP_FILESYSTEM_H
#define ZGNEP_FILESYSTEM_H

#include <QObject>
#include "mainwindow.h"

class zgnep_fileSystem: public MainWindow
{
    Q_OBJECT
public:
    zgnep_fileSystem(QWidget *parent = nullptr);
};

#endif // ZGNEP_FILESYSTEM_H
