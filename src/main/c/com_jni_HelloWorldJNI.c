#include "com_jni_HelloWorldJNI.h"
JNIEXPORT void JNICALL Java_com_jni_HelloWorldJNI_sayHello
  (JNIEnv *, jobject) {
    printf("Hello World!\n");
  }