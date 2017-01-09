/****************************************************************************
** Meta object code from reading C++ file 'qtreeview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qtreeview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      11,  109, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   32,   38,   38, 0x05,
      39,   32,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   78,   38,   38, 0x0a,
      85,   78,   38,   38, 0x0a,
     101,   32,   38,   38, 0x0a,
     121,   32,   38,   38, 0x0a,
     143,   78,   38,   38, 0x0a,
     171,   78,   38,   38, 0x0a,
     189,   38,   38,   38, 0x0a,
     201,   38,   38,   38, 0x0a,
     215,  234,   38,   38, 0x0a,
     240,  267,   38,   38, 0x09,
     290,  318,   38,   38, 0x09,
     336,   38,   38,   38, 0x09,
     350,   38,   38,   38, 0x09,
     361,  394,   38,   38, 0x09,
     412,   38,   38,   38, 0x08,
     438,   38,   38,   38, 0x08,
     463,  506,   38,   38, 0x08,

 // properties: name, type, flags
     519,  535, 0x02095103,
     539,  535, 0x02095103,
     551,  567, 0x01095103,
     572,  567, 0x01095103,
     590,  567, 0x01095103,
     606,  567, 0x01095103,
     621,  567, 0x01095103,
     630,  567, 0x01095103,
     650,  567, 0x01095103,
     659,  567, 0x01095103,
     672,  567, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QTreeView[] = {
    "QTreeView\0expanded(QModelIndex)\0index\0"
    "\0collapsed(QModelIndex)\0hideColumn(int)\0"
    "column\0showColumn(int)\0expand(QModelIndex)\0"
    "collapse(QModelIndex)\0resizeColumnToContents(int)\0"
    "sortByColumn(int)\0expandAll()\0"
    "collapseAll()\0expandToDepth(int)\0depth\0"
    "columnResized(int,int,int)\0"
    "column,oldSize,newSize\0"
    "columnCountChanged(int,int)\0"
    "oldCount,newCount\0columnMoved()\0"
    "reexpand()\0rowsRemoved(QModelIndex,int,int)\0"
    "parent,first,last\0_q_endAnimatedOperation()\0"
    "_q_modelAboutToBeReset()\0"
    "_q_sortIndicatorChanged(int,Qt::SortOrder)\0"
    "column,order\0autoExpandDelay\0int\0"
    "indentation\0rootIsDecorated\0bool\0"
    "uniformRowHeights\0itemsExpandable\0"
    "sortingEnabled\0animated\0allColumnsShowFocus\0"
    "wordWrap\0headerHidden\0expandsOnDoubleClick\0"
};

void QTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTreeView *_t = static_cast<QTreeView *>(_o);
        switch (_id) {
        case 0: _t->expanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->collapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->hideColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->showColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->expand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->collapse((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->resizeColumnToContents((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sortByColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->expandAll(); break;
        case 9: _t->collapseAll(); break;
        case 10: _t->expandToDepth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->columnResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->columnCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->columnMoved(); break;
        case 14: _t->reexpand(); break;
        case 15: _t->rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->d_func()->_q_endAnimatedOperation(); break;
        case 17: _t->d_func()->_q_modelAboutToBeReset(); break;
        case 18: _t->d_func()->_q_sortIndicatorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTreeView::staticMetaObject = {
    { &QAbstractItemView::staticMetaObject, qt_meta_stringdata_QTreeView,
      qt_meta_data_QTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTreeView))
        return static_cast<void*>(const_cast< QTreeView*>(this));
    return QAbstractItemView::qt_metacast(_clname);
}

int QTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = autoExpandDelay(); break;
        case 1: *reinterpret_cast< int*>(_v) = indentation(); break;
        case 2: *reinterpret_cast< bool*>(_v) = rootIsDecorated(); break;
        case 3: *reinterpret_cast< bool*>(_v) = uniformRowHeights(); break;
        case 4: *reinterpret_cast< bool*>(_v) = itemsExpandable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isSortingEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isAnimated(); break;
        case 7: *reinterpret_cast< bool*>(_v) = allColumnsShowFocus(); break;
        case 8: *reinterpret_cast< bool*>(_v) = wordWrap(); break;
        case 9: *reinterpret_cast< bool*>(_v) = isHeaderHidden(); break;
        case 10: *reinterpret_cast< bool*>(_v) = expandsOnDoubleClick(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAutoExpandDelay(*reinterpret_cast< int*>(_v)); break;
        case 1: setIndentation(*reinterpret_cast< int*>(_v)); break;
        case 2: setRootIsDecorated(*reinterpret_cast< bool*>(_v)); break;
        case 3: setUniformRowHeights(*reinterpret_cast< bool*>(_v)); break;
        case 4: setItemsExpandable(*reinterpret_cast< bool*>(_v)); break;
        case 5: setSortingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: setAnimated(*reinterpret_cast< bool*>(_v)); break;
        case 7: setAllColumnsShowFocus(*reinterpret_cast< bool*>(_v)); break;
        case 8: setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 9: setHeaderHidden(*reinterpret_cast< bool*>(_v)); break;
        case 10: setExpandsOnDoubleClick(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QTreeView::expanded(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTreeView::collapsed(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
