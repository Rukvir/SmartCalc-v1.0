/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.15.7
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/admin/SmartCalc-v1.0/src/smartcalk_QT/style.css
  0x0,0x0,0x0,0x3d,
  0x51,
  0x6c,0x61,0x62,0x6c,0x65,0x20,0x7b,0xa,0x20,0x20,0x20,0x20,0x62,0x6f,0x72,0x64,
  0x65,0x72,0x3a,0x20,0x32,0x70,0x78,0x20,0x73,0x6f,0x6c,0x69,0x64,0x20,0x62,0x6c,
  0x61,0x63,0x6b,0x3b,0xa,0x20,0x20,0x20,0x20,0x66,0x6f,0x6e,0x74,0x2d,0x73,0x69,
  0x7a,0x65,0x3a,0x20,0x32,0x34,0x70,0x78,0x3b,0xa,0x7d,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // style.css
  0x0,0x9,
  0x0,0x28,0xbf,0x23,
  0x0,0x73,
  0x0,0x74,0x0,0x79,0x0,0x6c,0x0,0x65,0x0,0x2e,0x0,0x63,0x0,0x73,0x0,0x73,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/style.css
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x84,0x7b,0xb,0xc7,0xc1,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_style)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_style)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_style)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_style)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_style)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_style)(); }
   } dummy;
}
