class staticClass{
static int counter=0;
staticClass(){
    counter++;
}
public void display(){
    System.out.println("Total no. obj till now "+counter);
}
}
class StaticBlockWithStaticVariable{
    static int num;
    static String mystr;
    static{
       num = 97;
       mystr = "Static keyword in Java";
    }
    public static void main(String args[])
    {
       System.out.println("Value of num: "+num);
       System.out.println("Value of mystr: "+mystr);
       staticClass s1 = new staticClass();
       s1.display();

       staticClass s2 = new staticClass();
       s2.display();

       staticClass s3 = new staticClass();
       s3.display();

       staticClass s4 = new staticClass();
       s4.display();
    }
 }