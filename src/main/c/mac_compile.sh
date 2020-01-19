#!/usr/bin/env bash
#HelloWorld
g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin com_jni_HelloWorldJNI.c -o libHelloWorld.o
g++ -dynamiclib -o libHelloWorld.dylib libHelloWorld.o -lc
#Param
g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin com_jni_ParamJNI.c -o libParam.o
g++ -dynamiclib -o libParam.dylib libParam.o -lc
#User
g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin com_jni_UserJNI.c -o libUser.o
g++ -dynamiclib -o libUser.dylib libUser.o -lc