#include "com_jni_UserJNI.h"

JNIEXPORT jobject JNICALL Java_com_jni_UserJNI_createUse
  (JNIEnv *env, jobject thisObject, jstring name, jint age){
    jclass userClass = env->FindClass("com/jni/User");
    jobject userData = env->AllocObject(userClass);
    jfieldID nameId = env->GetFieldID(userClass, "name", "Ljava/lang/String;");
    jfieldID ageId = env->GetFieldID(userClass, "age", "I");
    env->SetObjectField(userData, nameId, name);
    env->SetIntField(userData, ageId, age);
    return userData;
  }


JNIEXPORT jstring JNICALL Java_com_jni_UserJNI_toString
  (JNIEnv * env, jobject thisObject, jobject user){
    jclass userClass = env->GetObjectClass(user);
    jmethodID methodId = env->GetMethodID(userClass, "toString", "()Ljava/lang/String;");
    jstring result = (jstring)env->CallObjectMethod(user, methodId);
    return result;
  }