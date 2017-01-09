/****************************************************************************
** Meta object code from reading C++ file 'qmdiarea.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmdiarea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmdiarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMdiArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       8,   84, // properties
       2,  108, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   80,   44,   44, 0x0a,
      87,   44,   44,   44, 0x0a,
     104,   44,   44,   44, 0x0a,
     124,   44,   44,   44, 0x0a,
     147,   44,   44,   44, 0x0a,
     168,   44,   44,   44, 0x0a,
     192,   44,   44,   44, 0x0a,
     220,  244,   44,   44, 0x09,
     253,   44,   44,   44, 0x08,
     279,  343,   44,   44, 0x08,
     345,   44,   44,   44, 0x08,
     371,   44,   44,   44, 0x08,
     388,  343,   44,   44, 0x08,

 // properties: name, type, flags
     408,  419, 0x42095103,
     426,  442, 0x0009510b,
     454,  463, 0x0009510b,
     472,  485, 0x01095103,
     490,  485, 0x01095103,
     503,  485, 0x01095103,
     515,  524, 0x0009510b,
     545,  557, 0x0009510b,

 // enums: name, flags, count, data
     442, 0x0,    3,  116,
     463, 0x0,    2,  122,

 // enum data: key, value
     581, uint(QMdiArea::CreationOrder),
     595, uint(QMdiArea::StackingOrder),
     609, uint(QMdiArea::ActivationHistoryOrder),
     632, uint(QMdiArea::SubWindowView),
     646, uint(QMdiArea::TabbedView),

       0        // eod
};

static const char qt_meta_stringdata_QMdiArea[] = {
    "QMdiArea\0subWindowActivated(QMdiSubWindow*)\0"
    "\0setActiveSubWindow(QMdiSubWindow*)\0"
    "window\0tileSubWindows()\0cascadeSubWindows()\0"
    "closeActiveSubWindow()\0closeAllSubWindows()\0"
    "activateNextSubWindow()\0"
    "activatePreviousSubWindow()\0"
    "setupViewport(QWidget*)\0viewport\0"
    "_q_deactivateAllWindows()\0"
    "_q_processWindowStateChanged(Qt::WindowStates,Qt::WindowStates)\0"
    ",\0_q_currentTabChanged(int)\0"
    "_q_closeTab(int)\0_q_moveTab(int,int)\0"
    "background\0QBrush\0activationOrder\0"
    "WindowOrder\0viewMode\0ViewMode\0"
    "documentMode\0bool\0tabsClosable\0"
    "tabsMovable\0tabShape\0QTabWidget::TabShape\0"
    "tabPosition\0QTabWidget::TabPosition\0"
    "CreationOrder\0StackingOrder\0"
    "ActivationHistoryOrder\0SubWindowView\0"
    "TabbedView\0"
};

void QMdiArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMdiArea *_t = static_cast<QMdiArea *>(_o);
        switch (_id) {
        case 0: _t->subWindowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 1: _t->setActiveSubWindow((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 2: _t->tileSubWindows(); break;
        case 3: _t->cascadeSubWindows(); break;
        case 4: _t->closeActiveSubWindow(); break;
        case 5: _t->closeAllSubWindows(); break;
        case 6: _t->activateNextSubWindow(); break;
        case 7: _t->activatePreviousSubWindow(); break;
        case 8: _t->setupViewport((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 9: _t->d_func()->_q_deactivateAllWindows(); break;
        case 10: _t->d_func()->_q_processWindowStateChanged((*reinterpret_cast< Qt::WindowStates(*)>(_a[1])),(*reinterpret_cast< Qt::WindowStates(*)>(_a[2]))); break;
        case 11: _t->d_func()->_q_currentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->d_func()->_q_closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_moveTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

#ifdef Q_NO_DATA_RELOCATION
static const QMetaObjectAccessor qt_meta_extradata_QMdiArea[] = {
        QTabWidget::getStaticMetaObject,
#else
static const QMetaObject *qt_meta_extradata_QMdiArea[] = {
        &QTabWidget::staticMetaObject,
#endif //Q_NO_DATA_RELOCATION
    0
};

const QMetaObjectExtraData QMdiArea::staticMetaObjectExtraData = {
    qt_meta_extradata_QMdiArea,  qt_static_metacall 
};

const QMetaObject QMdiArea::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QMdiArea,
      qt_meta_data_QMdiArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMdiArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMdiArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMdiArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMdiArea))
        return static_cast<void*>(const_cast< QMdiArea*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QMdiArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = background(); break;
        case 1: *reinterpret_cast< WindowOrder*>(_v) = activationOrder(); break;
        case 2: *reinterpret_cast< ViewMode*>(_v) = viewMode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = documentMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = tabsClosable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = tabsMovable(); break;
        case 6: *reinterpret_cast< QTabWidget::TabShape*>(_v) = tabShape(); break;
        case 7: *reinterpret_cast< QTabWidget::TabPosition*>(_v) = tabPosition(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackground(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: setActivationOrder(*reinterpret_cast< WindowOrder*>(_v)); break;
        case 2: setViewMode(*reinterpret_cast< ViewMode*>(_v)); break;
        case 3: setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: setTabsClosable(*reinterpret_cast< bool*>(_v)); break;
        case 5: setTabsMovable(*reinterpret_cast< bool*>(_v)); break;
        case 6: setTabShape(*reinterpret_cast< QTabWidget::TabShape*>(_v)); break;
        case 7: setTabPosition(*reinterpret_cast< QTabWidget::TabPosition*>(_v)); break;
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
void QMdiArea::subWindowActivated(QMdiSubWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
