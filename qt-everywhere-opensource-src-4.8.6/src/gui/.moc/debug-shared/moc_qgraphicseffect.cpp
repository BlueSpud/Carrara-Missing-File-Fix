/****************************************************************************
** Meta object code from reading C++ file 'qgraphicseffect.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../effects/qgraphicseffect.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicseffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphicsEffect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       1,   33, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   37,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   63,   45,   45, 0x0a,
      70,   45,   45,   45, 0x0a,

 // properties: name, type, flags
      37,   79, 0x01495103,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
      84, 0x1,    4,   37,

 // enum data: key, value
      96, uint(QGraphicsEffect::SourceAttached),
     111, uint(QGraphicsEffect::SourceDetached),
     126, uint(QGraphicsEffect::SourceBoundingRectChanged),
     152, uint(QGraphicsEffect::SourceInvalidated),

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsEffect[] = {
    "QGraphicsEffect\0enabledChanged(bool)\0"
    "enabled\0\0setEnabled(bool)\0enable\0"
    "update()\0bool\0ChangeFlags\0SourceAttached\0"
    "SourceDetached\0SourceBoundingRectChanged\0"
    "SourceInvalidated\0"
};

void QGraphicsEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsEffect *_t = static_cast<QGraphicsEffect *>(_o);
        switch (_id) {
        case 0: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->update(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGraphicsEffect,
      qt_meta_data_QGraphicsEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsEffect))
        return static_cast<void*>(const_cast< QGraphicsEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int QGraphicsEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGraphicsEffect::enabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QGraphicsColorizeEffect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   45,   51,   51, 0x05,
      52,   75,   51,   51, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,  101,   51,   51, 0x0a,
     103,   75,   51,   51, 0x0a,

 // properties: name, type, flags
      45,  122, 0x43495103,
      75,  129, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsColorizeEffect[] = {
    "QGraphicsColorizeEffect\0colorChanged(QColor)\0"
    "color\0\0strengthChanged(qreal)\0strength\0"
    "setColor(QColor)\0c\0setStrength(qreal)\0"
    "QColor\0qreal\0"
};

void QGraphicsColorizeEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsColorizeEffect *_t = static_cast<QGraphicsColorizeEffect *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->strengthChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setStrength((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsColorizeEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsColorizeEffect::staticMetaObject = {
    { &QGraphicsEffect::staticMetaObject, qt_meta_stringdata_QGraphicsColorizeEffect,
      qt_meta_data_QGraphicsColorizeEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsColorizeEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsColorizeEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsColorizeEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsColorizeEffect))
        return static_cast<void*>(const_cast< QGraphicsColorizeEffect*>(this));
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsColorizeEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = strength(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setStrength(*reinterpret_cast< qreal*>(_v)); break;
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
void QGraphicsColorizeEffect::colorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsColorizeEffect::strengthChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QGraphicsBlurEffect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       2,   42, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   45,   56,   56, 0x05,
      57,   85,   56,   56, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   45,   56,   56, 0x0a,
     112,   85,   56,   56, 0x0a,

 // properties: name, type, flags
      45,  136, ((uint)QMetaType::QReal << 24) | 0x00495103,
     142,  152, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
     162, 0x1,    3,   50,
     152, 0x1,    3,   56,

 // enum data: key, value
     171, uint(QGraphicsBlurEffect::PerformanceHint),
     187, uint(QGraphicsBlurEffect::QualityHint),
     199, uint(QGraphicsBlurEffect::AnimationHint),
     171, uint(QGraphicsBlurEffect::PerformanceHint),
     187, uint(QGraphicsBlurEffect::QualityHint),
     199, uint(QGraphicsBlurEffect::AnimationHint),

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsBlurEffect[] = {
    "QGraphicsBlurEffect\0blurRadiusChanged(qreal)\0"
    "blurRadius\0\0blurHintsChanged(BlurHints)\0"
    "hints\0setBlurRadius(qreal)\0"
    "setBlurHints(BlurHints)\0qreal\0blurHints\0"
    "BlurHints\0BlurHint\0PerformanceHint\0"
    "QualityHint\0AnimationHint\0"
};

void QGraphicsBlurEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsBlurEffect *_t = static_cast<QGraphicsBlurEffect *>(_o);
        switch (_id) {
        case 0: _t->blurRadiusChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->blurHintsChanged((*reinterpret_cast< BlurHints(*)>(_a[1]))); break;
        case 2: _t->setBlurRadius((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->setBlurHints((*reinterpret_cast< BlurHints(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsBlurEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsBlurEffect::staticMetaObject = {
    { &QGraphicsEffect::staticMetaObject, qt_meta_stringdata_QGraphicsBlurEffect,
      qt_meta_data_QGraphicsBlurEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsBlurEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsBlurEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsBlurEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsBlurEffect))
        return static_cast<void*>(const_cast< QGraphicsBlurEffect*>(this));
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsBlurEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = blurRadius(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(blurHints()); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBlurRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setBlurHints(QFlag(*reinterpret_cast<int*>(_v))); break;
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
void QGraphicsBlurEffect::blurRadiusChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsBlurEffect::blurHintsChanged(BlurHints _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QGraphicsDropShadowEffect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   49,   56,   56, 0x05,
      57,   82,   56,   56, 0x05,
      93,  114,   56,   56, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,  139,   56,   56, 0x0a,
     143,  166,   56,   56, 0x0a,
     172,  189,   56,   56, 0x0a,
     191,  209,   56,   56, 0x0a,
     212,  230,   56,   56, 0x0a,
     233,   82,   56,   56, 0x0a,
     254,  114,   56,   56, 0x0a,

 // properties: name, type, flags
      49,  271, 0x1a495103,
     279,  287, ((uint)QMetaType::QReal << 24) | 0x00495103,
     293,  287, ((uint)QMetaType::QReal << 24) | 0x00495103,
      82,  287, ((uint)QMetaType::QReal << 24) | 0x00495103,
     114,  301, 0x43495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsDropShadowEffect[] = {
    "QGraphicsDropShadowEffect\0"
    "offsetChanged(QPointF)\0offset\0\0"
    "blurRadiusChanged(qreal)\0blurRadius\0"
    "colorChanged(QColor)\0color\0"
    "setOffset(QPointF)\0ofs\0setOffset(qreal,qreal)\0"
    "dx,dy\0setOffset(qreal)\0d\0setXOffset(qreal)\0"
    "dx\0setYOffset(qreal)\0dy\0setBlurRadius(qreal)\0"
    "setColor(QColor)\0QPointF\0xOffset\0qreal\0"
    "yOffset\0QColor\0"
};

void QGraphicsDropShadowEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsDropShadowEffect *_t = static_cast<QGraphicsDropShadowEffect *>(_o);
        switch (_id) {
        case 0: _t->offsetChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->blurRadiusChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setOffset((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->setOffset((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 5: _t->setOffset((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setXOffset((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setYOffset((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setBlurRadius((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsDropShadowEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsDropShadowEffect::staticMetaObject = {
    { &QGraphicsEffect::staticMetaObject, qt_meta_stringdata_QGraphicsDropShadowEffect,
      qt_meta_data_QGraphicsDropShadowEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsDropShadowEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsDropShadowEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsDropShadowEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsDropShadowEffect))
        return static_cast<void*>(const_cast< QGraphicsDropShadowEffect*>(this));
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsDropShadowEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = offset(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = xOffset(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = yOffset(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = blurRadius(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = color(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: setXOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setYOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setBlurRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setColor(*reinterpret_cast< QColor*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGraphicsDropShadowEffect::offsetChanged(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsDropShadowEffect::blurRadiusChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGraphicsDropShadowEffect::colorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_QGraphicsOpacityEffect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   45,   53,   53, 0x05,
      54,   81,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   45,   53,   53, 0x0a,
     104,   81,   53,   53, 0x0a,

 // properties: name, type, flags
      45,  127, ((uint)QMetaType::QReal << 24) | 0x00495103,
     133,  145, 0x42495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsOpacityEffect[] = {
    "QGraphicsOpacityEffect\0opacityChanged(qreal)\0"
    "opacity\0\0opacityMaskChanged(QBrush)\0"
    "mask\0setOpacity(qreal)\0setOpacityMask(QBrush)\0"
    "qreal\0opacityMask\0QBrush\0"
};

void QGraphicsOpacityEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsOpacityEffect *_t = static_cast<QGraphicsOpacityEffect *>(_o);
        switch (_id) {
        case 0: _t->opacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->opacityMaskChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 2: _t->setOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->setOpacityMask((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsOpacityEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsOpacityEffect::staticMetaObject = {
    { &QGraphicsEffect::staticMetaObject, qt_meta_stringdata_QGraphicsOpacityEffect,
      qt_meta_data_QGraphicsOpacityEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsOpacityEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsOpacityEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsOpacityEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsOpacityEffect))
        return static_cast<void*>(const_cast< QGraphicsOpacityEffect*>(this));
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsOpacityEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = opacity(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = opacityMask(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setOpacityMask(*reinterpret_cast< QBrush*>(_v)); break;
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
void QGraphicsOpacityEffect::opacityChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsOpacityEffect::opacityMaskChanged(const QBrush & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
