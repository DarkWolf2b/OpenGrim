/* Minimal jni_md.h for mingw-w64 cross-compilation of JNI/JVMTI agents */
#ifndef _JNI_MD_H
#define _JNI_MD_H
#define JNIEXPORT __attribute__((visibility("default")))
#define JNIIMPORT
#define JNICALL
typedef int jint;
typedef long long jlong;
typedef signed char jbyte;
typedef unsigned char jboolean;
typedef unsigned short jchar;
typedef short jshort;
typedef float jfloat;
typedef double jdouble;
typedef jint jsize;
#endif
