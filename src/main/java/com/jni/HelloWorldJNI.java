package com.jni;

/**
 *
 *
 * @author duanweidong
 * @version 1.0
 * @date 2020/1/16 pm 5:17
 */
public class HelloWorldJNI {
    static {
        System.loadLibrary("HelloWorld");
    }

    public native void sayHello();
}
