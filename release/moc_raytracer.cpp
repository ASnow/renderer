/****************************************************************************
** Meta object code from reading C++ file 'raytracer.h'
**
** Created: Wed 19. Jan 15:44:28 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Raytracer/raytracer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'raytracer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RayTracer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   11,   10,   10, 0x05,
      51,   45,   10,   10, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_RayTracer[] = {
    "RayTracer\0\0partial\0partialRendering(QImage*)\0"
    "final\0renderingReady(QImage*)\0"
};

const QMetaObject RayTracer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_RayTracer,
      qt_meta_data_RayTracer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RayTracer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RayTracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RayTracer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RayTracer))
        return static_cast<void*>(const_cast< RayTracer*>(this));
    return QThread::qt_metacast(_clname);
}

int RayTracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: partialRendering((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 1: renderingReady((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RayTracer::partialRendering(QImage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RayTracer::renderingReady(QImage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
