package com.jni;

/**
 * 描述：
 *
 * @author duanweidong
 * @version 1.0
 * @date 2020/1/16 下午5:57
 */
public class ParamJNI {

    static {
        System.loadLibrary("Param");
    }

    public  native int add(int a, int b);

    public native String concat(String a, String b);
}
