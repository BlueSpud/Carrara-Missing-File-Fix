/****************************************************************************
** Meta object code from reading C++ file 'qtabbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtabbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtabbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTabBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      12,   44, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   28,   34,   34, 0x05,
      35,   28,   34,   34, 0x05,
      58,   76,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   28,   34,   34, 0x0a,
     105,   34,   34,   34, 0x08,
     121,   34,   34,   34, 0x08,

 // properties: name, type, flags
     135,  141, 0x0009510b,
     147,  160, 0x02495103,
     164,  160, 0x02095001,
     170,  179, 0x01095103,
     184,  193, 0x15095103,
     199,  209, 0x0009510b,
     227,  179, 0x01095103,
     245,  179, 0x01095103,
     258,  284, 0x0009510b,
     302,  179, 0x01095103,
     312,  179, 0x01095103,
     320,  179, 0x01095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     141, 0x0,    8,   96,

 // enum data: key, value
     333, uint(QTabBar::RoundedNorth),
     346, uint(QTabBar::RoundedSouth),
     359, uint(QTabBar::RoundedWest),
     371, uint(QTabBar::RoundedEast),
     383, uint(QTabBar::TriangularNorth),
     399, uint(QTabBar::TriangularSouth),
     415, uint(QTabBar::TriangularWest),
     430, uint(QTabBar::TriangularEast),

       0        // eod
};

static const char qt_meta_stringdata_QTabBar[] = {
    "QTabBar\0currentChanged(int)\0index\0\0"
    "tabCloseRequested(int)\0tabMoved(int,int)\0"
    "from,to\0setCurrentIndex(int)\0"
    "_q_scrollTabs()\0_q_closeTab()\0shape\0"
    "Shape\0currentIndex\0int\0count\0drawBase\0"
    "bool\0iconSize\0QSize\0elideMode\0"
    "Qt::TextElideMode\0usesScrollButtons\0"
    "tabsClosable\0selectionBehaviorOnRemove\0"
    "SelectionBehavior\0expanding\0movable\0"
    "documentMode\0RoundedNorth\0RoundedSouth\0"
    "RoundedWest\0RoundedEast\0TriangularNorth\0"
    "TriangularSouth\0TriangularWest\0"
    "TriangularEast\0"
};

void QTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTabBar *_t = static_cast<QTabBar *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->tabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_scrollTabs(); break;
        case 5: _t->d_func()->_q_closeTab(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTabBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QTabBar,
      qt_meta_data_QTabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTabBar))
        return static_cast<void*>(const_cast< QTabBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Shape*>(_v) = shape(); break;
        case 1: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 2: *reinterpret_cast< int*>(_v) = count(); break;
        case 3: *reinterpret_cast< bool*>(_v) = drawBase(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = iconSize(); break;
        case 5: *reinterpret_cast< Qt::TextElideMode*>(_v) = elideMode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = usesScrollButtons(); break;
        case 7: *reinterpret_cast< bool*>(_v) = tabsClosable(); break;
        case 8: *reinterpret_cast< SelectionBehavior*>(_v) = selectionBehaviorOnRemove(); break;
        case 9: *reinterpret_cast< bool*>(_v) = expanding(); break;
        case 10: *reinterpret_cast< bool*>(_v) = isMovable(); break;
        case 11: *reinterpret_cast< bool*>(_v) = documentMode(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShape(*reinterpret_cast< Shape*>(_v)); break;
        case 1: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: setDrawBase(*reinterpret_cast< bool*>(_v)); break;
        case 4: setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: setElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 6: setUsesScrollButtons(*reinterpret_cast< bool*>(_v)); break;
        case 7: setTabsClosable(*reinterpret_cast< bool*>(_v)); break;
        case 8: setSelectionBehaviorOnRemove(*reinterpret_cast< SelectionBehavior*>(_v)); break;
        case 9: setExpanding(*reinterpret_cast< bool*>(_v)); break;
        case 10: setMovable(*reinterpret_cast< bool*>(_v)); break;
        case 11: setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QTabBar::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTabBar::tabCloseRequested(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTabBar::tabMoved(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
