/****************************************************************************
** Meta object code from reading C++ file 'qdatawidgetmapper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qdatawidgetmapper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdatawidgetmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDataWidgetMapper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       3,   79, // properties
       1,   91, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   43,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   49,   49,   49, 0x0a,
      59,   49,   68,   49, 0x0a,
      73,   49,   49,   49, 0x0a,
      83,   49,   49,   49, 0x0a,
      92,   49,   49,   49, 0x0a,
     101,   49,   49,   49, 0x0a,
     114,   43,   49,   49, 0x0a,
     135,   43,   49,   49, 0x0a,
     169,  209,   49,   49, 0x08,
     211,   49,   49,   49, 0x08,
     235,  209,   49,   49, 0x08,
     295,   49,   49,   49, 0x08,

 // properties: name, type, flags
     315,  328, 0x02495103,
     332,  344, 0x0009510b,
     360,  373, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, flags, count, data
     373, 0x0,    2,   95,

 // enum data: key, value
     386, uint(QDataWidgetMapper::AutoSubmit),
     397, uint(QDataWidgetMapper::ManualSubmit),

       0        // eod
};

static const char qt_meta_stringdata_QDataWidgetMapper[] = {
    "QDataWidgetMapper\0currentIndexChanged(int)\0"
    "index\0\0revert()\0submit()\0bool\0toFirst()\0"
    "toLast()\0toNext()\0toPrevious()\0"
    "setCurrentIndex(int)\0"
    "setCurrentModelIndex(QModelIndex)\0"
    "_q_dataChanged(QModelIndex,QModelIndex)\0"
    ",\0_q_commitData(QWidget*)\0"
    "_q_closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)\0"
    "_q_modelDestroyed()\0currentIndex\0int\0"
    "orientation\0Qt::Orientation\0submitPolicy\0"
    "SubmitPolicy\0AutoSubmit\0ManualSubmit\0"
};

void QDataWidgetMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDataWidgetMapper *_t = static_cast<QDataWidgetMapper *>(_o);
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->revert(); break;
        case 2: { bool _r = _t->submit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->toFirst(); break;
        case 4: _t->toLast(); break;
        case 5: _t->toNext(); break;
        case 6: _t->toPrevious(); break;
        case 7: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setCurrentModelIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->d_func()->_q_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 10: _t->d_func()->_q_commitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 11: _t->d_func()->_q_closeEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 12: _t->d_func()->_q_modelDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDataWidgetMapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDataWidgetMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDataWidgetMapper,
      qt_meta_data_QDataWidgetMapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDataWidgetMapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDataWidgetMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDataWidgetMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDataWidgetMapper))
        return static_cast<void*>(const_cast< QDataWidgetMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int QDataWidgetMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 2: *reinterpret_cast< SubmitPolicy*>(_v) = submitPolicy(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 2: setSubmitPolicy(*reinterpret_cast< SubmitPolicy*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDataWidgetMapper::currentIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
