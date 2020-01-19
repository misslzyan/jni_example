package com.jni;

import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;

/**
 * 描述：
 *
 * @author duanweidong
 * @version 1.0
 * @date 2020/1/16 下午5:20
 */
public class TestJNI {

    @Test
    public void testHelloWorld() {
        HelloWorldJNI helloWorldJNI = new HelloWorldJNI();
        helloWorldJNI.sayHello();
    }

    @Test
    public void testParam(){
        ParamJNI paramJNI = new ParamJNI();
        int r = paramJNI.add(1, 2);
        String rString = paramJNI.concat("ab", "cd");
        Assert.assertTrue(r == 3);
        Assert.assertTrue("abcd".equals(rString));
    }

    @Test
    public void testUser(){
        UserJNI userJNI = new UserJNI();
        User use = userJNI.createUse("aaa", 1);
        String r = use.toString();
        System.out.println(r);
    }
}
