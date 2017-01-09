/****************************************************************************
** Meta object code from reading C++ file 'qcolordialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qcolordialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QColorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   54, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   41,   47,   47, 0x05,
      48,   41,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   47,   47,   47, 0x08,
      85,  108,   47,   47, 0x08,
     114,  139,   47,   47, 0x08,
     143,  165,   47,   47, 0x08,
     167,  165,   47,   47, 0x08,
     191,   47,   47,   47, 0x08,

 // properties: name, type, flags
     222,  235, 0x43495103,
     242,  250, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, flags, count, data
     269, 0x0,    3,   66,

 // enum data: key, value
     287, uint(QColorDialog::ShowAlphaChannel),
     304, uint(QColorDialog::NoButtons),
     314, uint(QColorDialog::DontUseNativeDialog),

       0        // eod
};

static const char qt_meta_stringdata_QColorDialog[] = {
    "QColorDialog\0currentColorChanged(QColor)\0"
    "color\0\0colorSelected(QColor)\0"
    "_q_addCustom()\0_q_newHsv(int,int,int)\0"
    "h,s,v\0_q_newColorTypedIn(QRgb)\0rgb\0"
    "_q_newCustom(int,int)\0,\0_q_newStandard(int,int)\0"
    "_q_macRunNativeAppModalPanel()\0"
    "currentColor\0QColor\0options\0"
    "ColorDialogOptions\0ColorDialogOption\0"
    "ShowAlphaChannel\0NoButtons\0"
    "DontUseNativeDialog\0"
};

void QColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QColorDialog *_t = static_cast<QColorDialog *>(_o);
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_addCustom(); break;
        case 3: _t->d_func()->_q_newHsv((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->d_func()->_q_newColorTypedIn((*reinterpret_cast< QRgb(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_newCustom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->d_func()->_q_newStandard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->d_func()->_q_macRunNativeAppModalPanel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QColorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QColorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QColorDialog,
      qt_meta_data_QColorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QColorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QColorDialog))
        return static_cast<void*>(const_cast< QColorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = currentColor(); break;
        case 1: *reinterpret_cast< ColorDialogOptions*>(_v) = options(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setOptions(*reinterpret_cast< ColorDialogOptions*>(_v)); break;
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
void QColorDialog::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QColorDialog::colorSelected(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
