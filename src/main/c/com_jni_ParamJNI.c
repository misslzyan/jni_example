#include "com_jni_ParamJNI.h"
#include <jni.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

const char* my_strcat(const char* a, const char* b) {
     int l1 = strlen(a);
     int l2 = strlen(b);
     char *r = (char *)malloc(sizeof(char) * (l1+l2));
     sprintf(r,"%s%s",a,b);
     const char *s = r;
     return s;
}

JNIEXPORT jint JNICALL Java_com_jni_ParamJNI_add
  (JNIEnv *, jobject, jint a, jint b){
    return a + b;
  }
JNIEXPORT jstring JNICALL Java_com_jni_ParamJNI_concat
  (JNIEnv *env, jobject, jstring a, jstring b){
  jboolean isCopy = JNI_TRUE;
    const char *str1 = env->GetStringUTFChars(a, &isCopy);
    const char *str2 = env->GetStringUTFChars(b, &isCopy);
    const char *res = my_strcat(str1, str2);
    return env->NewStringUTF(res);
  }