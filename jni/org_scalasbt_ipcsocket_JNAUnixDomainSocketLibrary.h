/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary */

#ifndef _Included_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
#define _Included_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    socket
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_socket
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    bind
 * Signature: (ILorg/scalasbt/ipcsocket/UnixDomainSocketLibrary/SockaddrUn;I)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_bind
  (JNIEnv *, jobject, jint, jobject, jint);

/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    listen
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_listen
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    accept
 * Signature: (ILorg/scalasbt/ipcsocket/UnixDomainSocketLibrary/SockaddrUn;Lcom/sun/jna/ptr/IntByReference;)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_accept
  (JNIEnv *, jobject, jint, jobject, jobject);

/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    connect
 * Signature: (ILorg/scalasbt/ipcsocket/UnixDomainSocketLibrary/SockaddrUn;I)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_connect
  (JNIEnv *, jobject, jint, jobject, jint);

/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    read
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_read
  (JNIEnv *, jobject, jint, jbyteArray, jint);

/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    write
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_write
  (JNIEnv *, jobject, jint, jbyteArray, jint);

/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    close
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_close
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary
 * Method:    shutdown
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_scalasbt_ipcsocket_JNAUnixDomainSocketLibrary_shutdown
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif