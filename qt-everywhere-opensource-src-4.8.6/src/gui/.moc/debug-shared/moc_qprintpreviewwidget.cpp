/****************************************************************************
** Meta object code from reading C++ file 'qprintpreviewwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qprintpreviewwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprintpreviewwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPrintPreviewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   46,   54,   54, 0x05,
      55,   54,   54,   54, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   54,   54,   54, 0x0a,
      80,   94,   54,   54, 0x0a,
      99,   54,   54,   54, 0x2a,
     108,   94,   54,   54, 0x0a,
     123,   54,   54,   54, 0x2a,
     133,  154,   54,   54, 0x0a,
     165,  203,   54,   54, 0x0a,
     215,  237,   54,   54, 0x0a,
     246,  268,   54,   54, 0x0a,
     277,  297,   54,   54, 0x0a,
     308,   54,   54,   54, 0x0a,
     321,   54,   54,   54, 0x0a,
     333,   54,   54,   54, 0x0a,
     359,   54,   54,   54, 0x0a,
     384,   54,   54,   54, 0x0a,
     408,   54,   54,   54, 0x0a,
     433,   54,   54,   54, 0x0a,
     455,   54,   54,   54, 0x0a,
     471,   54,   54,   54, 0x08,
     480,   54,   54,   54, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPrintPreviewWidget[] = {
    "QPrintPreviewWidget\0paintRequested(QPrinter*)\0"
    "printer\0\0previewChanged()\0print()\0"
    "zoomIn(qreal)\0zoom\0zoomIn()\0zoomOut(qreal)\0"
    "zoomOut()\0setZoomFactor(qreal)\0"
    "zoomFactor\0setOrientation(QPrinter::Orientation)\0"
    "orientation\0setViewMode(ViewMode)\0"
    "viewMode\0setZoomMode(ZoomMode)\0zoomMode\0"
    "setCurrentPage(int)\0pageNumber\0"
    "fitToWidth()\0fitInView()\0"
    "setLandscapeOrientation()\0"
    "setPortraitOrientation()\0"
    "setSinglePageViewMode()\0"
    "setFacingPagesViewMode()\0setAllPagesViewMode()\0"
    "updatePreview()\0_q_fit()\0"
    "_q_updateCurrentPage()\0"
};

void QPrintPreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPrintPreviewWidget *_t = static_cast<QPrintPreviewWidget *>(_o);
        switch (_id) {
        case 0: _t->paintRequested((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 1: _t->previewChanged(); break;
        case 2: _t->print(); break;
        case 3: _t->zoomIn((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->zoomIn(); break;
        case 5: _t->zoomOut((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->zoomOut(); break;
        case 7: _t->setZoomFactor((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setOrientation((*reinterpret_cast< QPrinter::Orientation(*)>(_a[1]))); break;
        case 9: _t->setViewMode((*reinterpret_cast< ViewMode(*)>(_a[1]))); break;
        case 10: _t->setZoomMode((*reinterpret_cast< ZoomMode(*)>(_a[1]))); break;
        case 11: _t->setCurrentPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->fitToWidth(); break;
        case 13: _t->fitInView(); break;
        case 14: _t->setLandscapeOrientation(); break;
        case 15: _t->setPortraitOrientation(); break;
        case 16: _t->setSinglePageViewMode(); break;
        case 17: _t->setFacingPagesViewMode(); break;
        case 18: _t->setAllPagesViewMode(); break;
        case 19: _t->updatePreview(); break;
        case 20: _t->d_func()->_q_fit(); break;
        case 21: _t->d_func()->_q_updateCurrentPage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPrintPreviewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPrintPreviewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QPrintPreviewWidget,
      qt_meta_data_QPrintPreviewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPrintPreviewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPrintPreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPrintPreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPrintPreviewWidget))
        return static_cast<void*>(const_cast< QPrintPreviewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QPrintPreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void QPrintPreviewWidget::paintRequested(QPrinter * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPrintPreviewWidget::previewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
