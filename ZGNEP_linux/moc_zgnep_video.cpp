/****************************************************************************
** Meta object code from reading C++ file 'zgnep_video.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "multiMedia/zgnep_multiMedia_video/zgnep_video.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zgnep_video.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zgnep_video_t {
    QByteArrayData data[17];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zgnep_video_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zgnep_video_t qt_meta_stringdata_zgnep_video = {
    {
QT_MOC_LITERAL(0, 0, 11), // "zgnep_video"
QT_MOC_LITERAL(1, 12, 16), // "btn_exit_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "btn_play_clicked"
QT_MOC_LITERAL(4, 47, 16), // "btn_next_clicked"
QT_MOC_LITERAL(5, 64, 19), // "btn_volmeup_clicked"
QT_MOC_LITERAL(6, 84, 21), // "btn_volmedown_clicked"
QT_MOC_LITERAL(7, 106, 22), // "btn_fullscreen_clicked"
QT_MOC_LITERAL(8, 129, 23), // "mediaPlayerStateChanged"
QT_MOC_LITERAL(9, 153, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(10, 173, 16), // "listWidgetCliked"
QT_MOC_LITERAL(11, 190, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(12, 207, 32), // "mediaPlaylistCurrentIndexChanged"
QT_MOC_LITERAL(13, 240, 26), // "musicPlayerDurationChanged"
QT_MOC_LITERAL(14, 267, 26), // "mediaPlayerPositionChanged"
QT_MOC_LITERAL(15, 294, 22), // "durationSliderReleased"
QT_MOC_LITERAL(16, 317, 20) // "volumeSliderReleased"

    },
    "zgnep_video\0btn_exit_clicked\0\0"
    "btn_play_clicked\0btn_next_clicked\0"
    "btn_volmeup_clicked\0btn_volmedown_clicked\0"
    "btn_fullscreen_clicked\0mediaPlayerStateChanged\0"
    "QMediaPlayer::State\0listWidgetCliked\0"
    "QListWidgetItem*\0mediaPlaylistCurrentIndexChanged\0"
    "musicPlayerDurationChanged\0"
    "mediaPlayerPositionChanged\0"
    "durationSliderReleased\0volumeSliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zgnep_video[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      13,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void zgnep_video::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zgnep_video *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btn_exit_clicked(); break;
        case 1: _t->btn_play_clicked(); break;
        case 2: _t->btn_next_clicked(); break;
        case 3: _t->btn_volmeup_clicked(); break;
        case 4: _t->btn_volmedown_clicked(); break;
        case 5: _t->btn_fullscreen_clicked(); break;
        case 6: _t->mediaPlayerStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 7: _t->listWidgetCliked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->mediaPlaylistCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->musicPlayerDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->mediaPlayerPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->durationSliderReleased(); break;
        case 12: _t->volumeSliderReleased(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject zgnep_video::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_zgnep_video.data,
    qt_meta_data_zgnep_video,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zgnep_video::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zgnep_video::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zgnep_video.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int zgnep_video::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
