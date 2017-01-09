/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsscene.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicsview/qgraphicsscene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphicsScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       9,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   38,   45,   45, 0x05,
      46,   71,   45,   45, 0x05,
      76,   45,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   71,   45,   45, 0x0a,
     110,   45,   45,   45, 0x2a,
     119,  150,   45,   45, 0x0a,
     162,   71,   45,   45, 0x2a,
     181,   45,   45,   45, 0x2a,
     194,   45,   45,   45, 0x0a,
     204,   45,   45,   45, 0x0a,
     221,   45,   45,   45, 0x0a,
     229,  254,  259,   45, 0x09,
     264,   45,   45,   45, 0x08,
     281,   45,   45,   45, 0x08,
     298,   45,   45,   45, 0x08,
     321,   45,   45,   45, 0x08,

 // properties: name, type, flags
     352,  368, 0x42095103,
     375,  368, 0x42095103,
     391,  407, 0x0009510b,
     423,  433, 0x14095103,
     440,  453, 0x02095103,
     457,  465, 0x44095103,
     474,  479, 0x40095103,
     485,  259, 0x01095103,
     502,  259, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsScene[] = {
    "QGraphicsScene\0changed(QList<QRectF>)\0"
    "region\0\0sceneRectChanged(QRectF)\0rect\0"
    "selectionChanged()\0update(QRectF)\0"
    "update()\0invalidate(QRectF,SceneLayers)\0"
    "rect,layers\0invalidate(QRectF)\0"
    "invalidate()\0advance()\0clearSelection()\0"
    "clear()\0focusNextPrevChild(bool)\0next\0"
    "bool\0_q_emitUpdated()\0_q_polishItems()\0"
    "_q_processDirtyItems()\0"
    "_q_updateScenePosDescendants()\0"
    "backgroundBrush\0QBrush\0foregroundBrush\0"
    "itemIndexMethod\0ItemIndexMethod\0"
    "sceneRect\0QRectF\0bspTreeDepth\0int\0"
    "palette\0QPalette\0font\0QFont\0"
    "sortCacheEnabled\0stickyFocus\0"
};

void QGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsScene *_t = static_cast<QGraphicsScene *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QList<QRectF>(*)>(_a[1]))); break;
        case 1: _t->sceneRectChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->update((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 4: _t->update(); break;
        case 5: _t->invalidate((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< SceneLayers(*)>(_a[2]))); break;
        case 6: _t->invalidate((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 7: _t->invalidate(); break;
        case 8: _t->advance(); break;
        case 9: _t->clearSelection(); break;
        case 10: _t->clear(); break;
        case 11: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->d_func()->_q_emitUpdated(); break;
        case 13: _t->d_func()->_q_polishItems(); break;
        case 14: _t->d_func()->_q_processDirtyItems(); break;
        case 15: _t->d_func()->_q_updateScenePosDescendants(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsScene::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGraphicsScene,
      qt_meta_data_QGraphicsScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsScene))
        return static_cast<void*>(const_cast< QGraphicsScene*>(this));
    return QObject::qt_metacast(_clname);
}

int QGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = backgroundBrush(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = foregroundBrush(); break;
        case 2: *reinterpret_cast< ItemIndexMethod*>(_v) = itemIndexMethod(); break;
        case 3: *reinterpret_cast< QRectF*>(_v) = sceneRect(); break;
        case 4: *reinterpret_cast< int*>(_v) = bspTreeDepth(); break;
        case 5: *reinterpret_cast< QPalette*>(_v) = palette(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 7: *reinterpret_cast< bool*>(_v) = isSortCacheEnabled(); break;
        case 8: *reinterpret_cast< bool*>(_v) = stickyFocus(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackgroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: setForegroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: setItemIndexMethod(*reinterpret_cast< ItemIndexMethod*>(_v)); break;
        case 3: setSceneRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 4: setBspTreeDepth(*reinterpret_cast< int*>(_v)); break;
        case 5: setPalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 6: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 7: setSortCacheEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 8: setStickyFocus(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGraphicsScene::changed(const QList<QRectF> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsScene::sceneRectChanged(const QRectF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGraphicsScene::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
