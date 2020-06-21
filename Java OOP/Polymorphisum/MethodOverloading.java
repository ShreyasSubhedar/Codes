//package Java OOP.Polymorphisum;

public class MethodOverloading {
    static int add(int a, int b){return a+b;};
    static double add(double a, double b){return a+b;};
    static double add(int a, int b, int c){return a+b+c;};
    static int add(int a , int b , int c, int d){return a+b+c+d;};
    static void sum(int a,long b){System.out.println("a method invoked");}   // produce ambiguity
    static void sum(long a,int b){System.out.println("b method invoked");}  

    static void sum(int a,int b){System.out.println("int arg method invoked");}   // if we provide exact parameter then call goes to the respected one.   
    static void sum(long a,long b){System.out.println("long arg method invoked");}  

   public static void main(String[] args) {
       MethodOverloading.add(23, 23);
       MethodOverloading.add(34, 23, 12312);
       MethodOverloading.sum(23, 23);
      
  }

}