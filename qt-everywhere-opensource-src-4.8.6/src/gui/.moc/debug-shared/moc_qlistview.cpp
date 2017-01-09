/****************************************************************************
** Meta object code from reading C++ file 'qlistview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qlistview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      13,   19, // properties
       5,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   40,   48,   48, 0x05,

 // properties: name, type, flags
      49,   58, 0x0009510b,
      67,   72, 0x0009510b,
      77,   88, 0x01095003,
      93,  104, 0x0009510b,
     115,  126, 0x0009510b,
     137,  145, 0x02095103,
     149,  158, 0x15095103,
     164,  173, 0x0009510b,
     182,  145, 0x02095103,
     194,   88, 0x01095103,
     211,  145, 0x02095103,
     221,   88, 0x01095103,
     230,   88, 0x01095103,

 // enums: name, flags, count, data
      58, 0x0,    3,   78,
      72, 0x0,    2,   84,
     104, 0x0,    2,   88,
     126, 0x0,    2,   92,
     173, 0x0,    2,   96,

 // enum data: key, value
     251, uint(QListView::Static),
     258, uint(QListView::Free),
     263, uint(QListView::Snap),
     268, uint(QListView::LeftToRight),
     280, uint(QListView::TopToBottom),
     292, uint(QListView::Fixed),
     298, uint(QListView::Adjust),
     305, uint(QListView::SinglePass),
     316, uint(QListView::Batched),
     324, uint(QListView::ListMode),
     333, uint(QListView::IconMode),

       0        // eod
};

static const char qt_meta_stringdata_QListView[] = {
    "QListView\0indexesMoved(QModelIndexList)\0"
    "indexes\0\0movement\0Movement\0flow\0Flow\0"
    "isWrapping\0bool\0resizeMode\0ResizeMode\0"
    "layoutMode\0LayoutMode\0spacing\0int\0"
    "gridSize\0QSize\0viewMode\0ViewMode\0"
    "modelColumn\0uniformItemSizes\0batchSize\0"
    "wordWrap\0selectionRectVisible\0Static\0"
    "Free\0Snap\0LeftToRight\0TopToBottom\0"
    "Fixed\0Adjust\0SinglePass\0Batched\0"
    "ListMode\0IconMode\0"
};

void QListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QListView *_t = static_cast<QListView *>(_o);
        switch (_id) {
        case 0: _t->indexesMoved((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QListView::staticMetaObject = {
    { &QAbstractItemView::staticMetaObject, qt_meta_stringdata_QListView,
      qt_meta_data_QListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QListView))
        return static_cast<void*>(const_cast< QListView*>(this));
    return QAbstractItemView::qt_metacast(_clname);
}

int QListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Movement*>(_v) = movement(); break;
        case 1: *reinterpret_cast< Flow*>(_v) = flow(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isWrapping(); break;
        case 3: *reinterpret_cast< ResizeMode*>(_v) = resizeMode(); break;
        case 4: *reinterpret_cast< LayoutMode*>(_v) = layoutMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = spacing(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = gridSize(); break;
        case 7: *reinterpret_cast< ViewMode*>(_v) = viewMode(); break;
        case 8: *reinterpret_cast< int*>(_v) = modelColumn(); break;
        case 9: *reinterpret_cast< bool*>(_v) = uniformItemSizes(); break;
        case 10: *reinterpret_cast< int*>(_v) = batchSize(); break;
        case 11: *reinterpret_cast< bool*>(_v) = wordWrap(); break;
        case 12: *reinterpret_cast< bool*>(_v) = isSelectionRectVisible(); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMovement(*reinterpret_cast< Movement*>(_v)); break;
        case 1: setFlow(*reinterpret_cast< Flow*>(_v)); break;
        case 2: setWrapping(*reinterpret_cast< bool*>(_v)); break;
        case 3: setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 4: setLayoutMode(*reinterpret_cast< LayoutMode*>(_v)); break;
        case 5: setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 6: setGridSize(*reinterpret_cast< QSize*>(_v)); break;
        case 7: setViewMode(*reinterpret_cast< ViewMode*>(_v)); break;
        case 8: setModelColumn(*reinterpret_cast< int*>(_v)); break;
        case 9: setUniformItemSizes(*reinterpret_cast< bool*>(_v)); break;
        case 10: setBatchSize(*reinterpret_cast< int*>(_v)); break;
        case 11: setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 12: setSelectionRectVisible(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QListView::indexesMoved(const QModelIndexList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
