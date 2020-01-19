package com.jni;

/**
 * 描述：
 *
 * @author duanweidong
 * @version 1.0
 * @date 2020/1/19 下午7:46
 */
public class UserJNI {

    static {
        System.loadLibrary("User");
    }

    public native User createUse(String name, int age);

    public native String toString(User user);
}
