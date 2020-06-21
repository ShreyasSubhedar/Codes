//Java Program to demonstrate the use of the parameterized constructor.  
class ParametrizedConstructor{  
    int id;  
    String name;  
    //creating a Parametrized Constructor
    ParametrizedConstructor(int i,String n){  
    id = i;  
    name = n;  
    }  
    //method to display the values  
    void display(){System.out.println(id+" "+name);}  
   
    public static void main(String args[]){  
    //creating objects and passing values  
    ParametrizedConstructor s1 = new ParametrizedConstructor(111,"Karan");  
    ParametrizedConstructor s2 = new ParametrizedConstructor(222,"Aryan");  
    //calling method to display the values of object  
    s1.display();  
    s2.display();  
   }  
}  