/****************************************************************************
** Meta object code from reading C++ file 'qmouseeventtransition.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statemachine/qmouseeventtransition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmouseeventtransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMouseEventTransition[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      22,   29, 0x0009510b,
      45,   58, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QMouseEventTransition[] = {
    "QMouseEventTransition\0button\0"
    "Qt::MouseButton\0modifierMask\0"
    "Qt::KeyboardModifiers\0"
};

void QMouseEventTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QMouseEventTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMouseEventTransition::staticMetaObject = {
    { &QEventTransition::staticMetaObject, qt_meta_stringdata_QMouseEventTransition,
      qt_meta_data_QMouseEventTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMouseEventTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMouseEventTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMouseEventTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMouseEventTransition))
        return static_cast<void*>(const_cast< QMouseEventTransition*>(this));
    return QEventTransition::qt_metacast(_clname);
}

int QMouseEventTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEventTransition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::MouseButton*>(_v) = button(); break;
        case 1: *reinterpret_cast< Qt::KeyboardModifiers*>(_v) = modifierMask(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setButton(*reinterpret_cast< Qt::MouseButton*>(_v)); break;
        case 1: setModifierMask(*reinterpret_cast< Qt::KeyboardModifiers*>(_v)); break;
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
QT_END_MOC_NAMESPACE
