package com.shreyasxo;

public class User {
    // Fields (attributes)
    public String name;

    public User(String name) {
        this.name = name;
    }
    public  void  sayHello(){
        System.out.println("Hi my name is " +
                this.name);
    }
}
