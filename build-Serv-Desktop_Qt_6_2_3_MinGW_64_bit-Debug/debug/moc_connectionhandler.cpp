/****************************************************************************
** Meta object code from reading C++ file 'connectionhandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Server/connectionhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectionHandler_t {
    const uint offsetsAndSize[14];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ConnectionHandler_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ConnectionHandler_t qt_meta_stringdata_ConnectionHandler = {
    {
QT_MOC_LITERAL(0, 17), // "ConnectionHandler"
QT_MOC_LITERAL(18, 17), // "on_New_Connection"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 23), // "on_Client_Disconnection"
QT_MOC_LITERAL(61, 15), // "on_Socket_Error"
QT_MOC_LITERAL(77, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(106, 20) // "on_Socket_Ready_Read"

    },
    "ConnectionHandler\0on_New_Connection\0"
    "\0on_Client_Disconnection\0on_Socket_Error\0"
    "QAbstractSocket::SocketError\0"
    "on_Socket_Ready_Read"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectionHandler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    1,   40,    2, 0x08,    3 /* Private */,
       6,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

       0        // eod
};

void ConnectionHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectionHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_New_Connection(); break;
        case 1: _t->on_Client_Disconnection(); break;
        case 2: _t->on_Socket_Error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->on_Socket_Ready_Read(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject ConnectionHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ConnectionHandler.offsetsAndSize,
    qt_meta_data_ConnectionHandler,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ConnectionHandler_t
, QtPrivate::TypeAndForceComplete<ConnectionHandler, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ConnectionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConnectionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
