/****************************************************************************
** Meta object code from reading C++ file 'qspinbox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qspinbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qspinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   27,   27,   27, 0x05,
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   64,   27,   27, 0x0a,

 // properties: name, type, flags
      68,   75, 0x0a095103,
      83,   75, 0x0a095103,
      90,   75, 0x0a095001,
     100,  108, 0x02095103,
     112,  108, 0x02095103,
     120,  108, 0x02095103,
     131,  108, 0x02595103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QSpinBox[] = {
    "QSpinBox\0valueChanged(int)\0\0"
    "valueChanged(QString)\0setValue(int)\0"
    "val\0suffix\0QString\0prefix\0cleanText\0"
    "minimum\0int\0maximum\0singleStep\0value\0"
};

void QSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSpinBox *_t = static_cast<QSpinBox *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSpinBox::staticMetaObject = {
    { &QAbstractSpinBox::staticMetaObject, qt_meta_stringdata_QSpinBox,
      qt_meta_data_QSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSpinBox))
        return static_cast<void*>(const_cast< QSpinBox*>(this));
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = suffix(); break;
        case 1: *reinterpret_cast< QString*>(_v) = prefix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = cleanText(); break;
        case 3: *reinterpret_cast< int*>(_v) = minimum(); break;
        case 4: *reinterpret_cast< int*>(_v) = maximum(); break;
        case 5: *reinterpret_cast< int*>(_v) = singleStep(); break;
        case 6: *reinterpret_cast< int*>(_v) = value(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 3: setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 4: setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 5: setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 6: setValue(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSpinBox::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSpinBox::valueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_QDoubleSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   36,   36,   36, 0x05,
      37,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   76,   36,   36, 0x0a,

 // properties: name, type, flags
      80,   87, 0x0a095103,
      95,   87, 0x0a095103,
     102,   87, 0x0a095001,
     112,  121, 0x02095103,
     125,  133, 0x06095103,
     140,  133, 0x06095103,
     148,  133, 0x06095103,
     159,  133, 0x06595103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QDoubleSpinBox[] = {
    "QDoubleSpinBox\0valueChanged(double)\0"
    "\0valueChanged(QString)\0setValue(double)\0"
    "val\0prefix\0QString\0suffix\0cleanText\0"
    "decimals\0int\0minimum\0double\0maximum\0"
    "singleStep\0value\0"
};

void QDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDoubleSpinBox *_t = static_cast<QDoubleSpinBox *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDoubleSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDoubleSpinBox::staticMetaObject = {
    { &QAbstractSpinBox::staticMetaObject, qt_meta_stringdata_QDoubleSpinBox,
      qt_meta_data_QDoubleSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDoubleSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDoubleSpinBox))
        return static_cast<void*>(const_cast< QDoubleSpinBox*>(this));
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = prefix(); break;
        case 1: *reinterpret_cast< QString*>(_v) = suffix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = cleanText(); break;
        case 3: *reinterpret_cast< int*>(_v) = decimals(); break;
        case 4: *reinterpret_cast< double*>(_v) = minimum(); break;
        case 5: *reinterpret_cast< double*>(_v) = maximum(); break;
        case 6: *reinterpret_cast< double*>(_v) = singleStep(); break;
        case 7: *reinterpret_cast< double*>(_v) = value(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 3: setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 4: setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 5: setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 6: setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 7: setValue(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDoubleSpinBox::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDoubleSpinBox::valueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
