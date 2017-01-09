/****************************************************************************
** Meta object code from reading C++ file 'qfileinfogatherer_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qfileinfogatherer_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfileinfogatherer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFileInfoGatherer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   68,   86,   86, 0x05,
      87,  123,   86,   86, 0x05,
     145,  175,   86,   86, 0x05,
     197,  222,   86,   86, 0x05,

 // slots: signature, parameters, type, tag, flags
     227,  241,   86,   86, 0x0a,
     255,  301,   86,   86, 0x0a,
     312,  222,   86,   86, 0x0a,
     332,  357,   86,   86, 0x0a,
     364,   86,  382,   86, 0x0a,
     387,  423,   86,   86, 0x0a,
     432,   86,  447,   86, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QFileInfoGatherer[] = {
    "QFileInfoGatherer\0"
    "updates(QString,QList<QPair<QString,QFileInfo> >)\0"
    "directory,updates\0\0"
    "newListOfFiles(QString,QStringList)\0"
    "directory,listOfFiles\0"
    "nameResolved(QString,QString)\0"
    "fileName,resolvedName\0directoryLoaded(QString)\0"
    "path\0list(QString)\0directoryPath\0"
    "fetchExtendedInformation(QString,QStringList)\0"
    "path,files\0updateFile(QString)\0"
    "setResolveSymlinks(bool)\0enable\0"
    "resolveSymlinks()\0bool\0"
    "setIconProvider(QFileIconProvider*)\0"
    "provider\0iconProvider()\0QFileIconProvider*\0"
};

void QFileInfoGatherer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFileInfoGatherer *_t = static_cast<QFileInfoGatherer *>(_o);
        switch (_id) {
        case 0: _t->updates((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QPair<QString,QFileInfo> >(*)>(_a[2]))); break;
        case 1: _t->newListOfFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 2: _t->nameResolved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->directoryLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->list((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fetchExtendedInformation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 6: _t->updateFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setResolveSymlinks((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { bool _r = _t->resolveSymlinks();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setIconProvider((*reinterpret_cast< QFileIconProvider*(*)>(_a[1]))); break;
        case 10: { QFileIconProvider* _r = _t->iconProvider();
            if (_a[0]) *reinterpret_cast< QFileIconProvider**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFileInfoGatherer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFileInfoGatherer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QFileInfoGatherer,
      qt_meta_data_QFileInfoGatherer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFileInfoGatherer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFileInfoGatherer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFileInfoGatherer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFileInfoGatherer))
        return static_cast<void*>(const_cast< QFileInfoGatherer*>(this));
    return QThread::qt_metacast(_clname);
}

int QFileInfoGatherer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QFileInfoGatherer::updates(const QString & _t1, const QList<QPair<QString,QFileInfo> > & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFileInfoGatherer::newListOfFiles(const QString & _t1, const QStringList & _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< QFileInfoGatherer *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFileInfoGatherer::nameResolved(const QString & _t1, const QString & _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< QFileInfoGatherer *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QFileInfoGatherer::directoryLoaded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
