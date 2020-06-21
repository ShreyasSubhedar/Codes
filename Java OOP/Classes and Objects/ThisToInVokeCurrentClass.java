 class A{  
    public A(){System.out.println("hello a");}  
 public A(int x){  
    this();  
    System.out.println(x);  
    }

    }  
    class ThisToInVokeCurrentClass{  
    public static void main(String args[]){  
    A a=new A(10);  
    }}  
