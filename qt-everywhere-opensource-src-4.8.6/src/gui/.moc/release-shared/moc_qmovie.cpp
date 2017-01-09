/****************************************************************************
** Meta object code from reading C++ file 'qmovie.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../image/qmovie.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmovie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMovie[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,   79, // properties
       2,   85, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   17,   17,   17, 0x05,
      18,   33,   17,   17, 0x05,
      38,   53,   17,   17, 0x05,
      58,   91,   17,   17, 0x05,
      97,  135,   17,   17, 0x05,
     141,   17,   17,   17, 0x05,
     152,  170,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     182,   17,   17,   17, 0x0a,
     190,   17,  208,   17, 0x0a,
     213,  229,   17,   17, 0x0a,
     236,   17,   17,   17, 0x0a,
     243,  257,   17,   17, 0x0a,
     270,   17,   17,   17, 0x08,

 // properties: name, type, flags
     289,  295, 0x02095103,
     299,  309, 0x0009510b,

 // enums: name, flags, count, data
     319, 0x0,    3,   93,
     309, 0x0,    2,   99,

 // enum data: key, value
     330, uint(QMovie::NotRunning),
     341, uint(QMovie::Paused),
     348, uint(QMovie::Running),
     356, uint(QMovie::CacheNone),
     366, uint(QMovie::CacheAll),

       0        // eod
};

static const char qt_meta_stringdata_QMovie[] = {
    "QMovie\0started()\0\0resized(QSize)\0size\0"
    "updated(QRect)\0rect\0"
    "stateChanged(QMovie::MovieState)\0state\0"
    "error(QImageReader::ImageReaderError)\0"
    "error\0finished()\0frameChanged(int)\0"
    "frameNumber\0start()\0jumpToNextFrame()\0"
    "bool\0setPaused(bool)\0paused\0stop()\0"
    "setSpeed(int)\0percentSpeed\0"
    "_q_loadNextFrame()\0speed\0int\0cacheMode\0"
    "CacheMode\0MovieState\0NotRunning\0Paused\0"
    "Running\0CacheNone\0CacheAll\0"
};

void QMovie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMovie *_t = static_cast<QMovie *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->resized((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: _t->updated((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QMovie::MovieState(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< QImageReader::ImageReaderError(*)>(_a[1]))); break;
        case 5: _t->finished(); break;
        case 6: _t->frameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->start(); break;
        case 8: { bool _r = _t->jumpToNextFrame();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->stop(); break;
        case 11: _t->setSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->d_func()->_q_loadNextFrame(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QMovie::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMovie::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMovie,
      qt_meta_data_QMovie, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMovie::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMovie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMovie::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMovie))
        return static_cast<void*>(const_cast< QMovie*>(this));
    return QObject::qt_metacast(_clname);
}

int QMovie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = speed(); break;
        case 1: *reinterpret_cast< CacheMode*>(_v) = cacheMode(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSpeed(*reinterpret_cast< int*>(_v)); break;
        case 1: setCacheMode(*reinterpret_cast< CacheMode*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMovie::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QMovie::resized(const QSize & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMovie::updated(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMovie::stateChanged(QMovie::MovieState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMovie::error(QImageReader::ImageReaderError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMovie::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QMovie::frameChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
