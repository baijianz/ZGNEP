/****************************************************************************
** Meta object code from reading C++ file 'zgnep_fileSystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fileSystem/zgnep_fileSystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zgnep_fileSystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zgnep_fileSystem_t {
    QByteArrayData data[16];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zgnep_fileSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zgnep_fileSystem_t qt_meta_stringdata_zgnep_fileSystem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "zgnep_fileSystem"
QT_MOC_LITERAL(1, 17, 5), // "about"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "iconActivated"
QT_MOC_LITERAL(4, 38, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(5, 72, 6), // "reason"
QT_MOC_LITERAL(6, 79, 12), // "languageZHCN"
QT_MOC_LITERAL(7, 92, 12), // "languageENUS"
QT_MOC_LITERAL(8, 105, 24), // "onToolBarActionTriggered"
QT_MOC_LITERAL(9, 130, 8), // "QAction*"
QT_MOC_LITERAL(10, 139, 6), // "action"
QT_MOC_LITERAL(11, 146, 17), // "toolBarOnTextMenu"
QT_MOC_LITERAL(12, 164, 3), // "pos"
QT_MOC_LITERAL(13, 168, 11), // "onFindFiles"
QT_MOC_LITERAL(14, 180, 4), // "path"
QT_MOC_LITERAL(15, 185, 4) // "find"

    },
    "zgnep_fileSystem\0about\0\0iconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0languageZHCN\0languageENUS\0"
    "onToolBarActionTriggered\0QAction*\0"
    "action\0toolBarOnTextMenu\0pos\0onFindFiles\0"
    "path\0find"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zgnep_fileSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,
      11,    1,   58,    2, 0x08 /* Private */,
      13,    2,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,

       0        // eod
};

void zgnep_fileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zgnep_fileSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->about(); break;
        case 1: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 2: _t->languageZHCN(); break;
        case 3: _t->languageENUS(); break;
        case 4: _t->onToolBarActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->toolBarOnTextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->onFindFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject zgnep_fileSystem::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_zgnep_fileSystem.data,
    qt_meta_data_zgnep_fileSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zgnep_fileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zgnep_fileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zgnep_fileSystem.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int zgnep_fileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
