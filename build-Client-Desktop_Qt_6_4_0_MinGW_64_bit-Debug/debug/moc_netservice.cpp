/****************************************************************************
** Meta object code from reading C++ file 'netservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Client/netservice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_NetService_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[18];
    char stringdata6[21];
    char stringdata7[20];
    char stringdata8[18];
    char stringdata9[14];
    char stringdata10[9];
    char stringdata11[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_NetService_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_NetService_t qt_meta_stringdata_NetService = {
    {
        QT_MOC_LITERAL(0, 10),  // "NetService"
        QT_MOC_LITERAL(11, 8),  // "onSignIn"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 8),  // "username"
        QT_MOC_LITERAL(30, 8),  // "password"
        QT_MOC_LITERAL(39, 17),  // "onSocketConnected"
        QT_MOC_LITERAL(57, 20),  // "onSocketDisconnected"
        QT_MOC_LITERAL(78, 19),  // "onConnectionTimeOut"
        QT_MOC_LITERAL(98, 17),  // "onSocketReadyRead"
        QT_MOC_LITERAL(116, 13),  // "onMessageSent"
        QT_MOC_LITERAL(130, 8),  // "Message&"
        QT_MOC_LITERAL(139, 3)   // "msg"
    },
    "NetService",
    "onSignIn",
    "",
    "username",
    "password",
    "onSocketConnected",
    "onSocketDisconnected",
    "onConnectionTimeOut",
    "onSocketReadyRead",
    "onMessageSent",
    "Message&",
    "msg"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_NetService[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x08,    1 /* Private */,
       5,    0,   55,    2, 0x08,    4 /* Private */,
       6,    0,   56,    2, 0x08,    5 /* Private */,
       7,    0,   57,    2, 0x08,    6 /* Private */,
       8,    0,   58,    2, 0x08,    7 /* Private */,
       9,    1,   59,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject NetService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NetService.offsetsAndSizes,
    qt_meta_data_NetService,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_NetService_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NetService, std::true_type>,
        // method 'onSignIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onSocketConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocketDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnectionTimeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocketReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMessageSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>
    >,
    nullptr
} };

void NetService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSignIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->onSocketConnected(); break;
        case 2: _t->onSocketDisconnected(); break;
        case 3: _t->onConnectionTimeOut(); break;
        case 4: _t->onSocketReadyRead(); break;
        case 5: _t->onMessageSent((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *NetService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
