//Let us see another example of default constructor  
//which displays the default values  
class DefaultConstructor{  
    int id;  
    String name;  
    //method to display the value of id and name  
    void display(){System.out.println(id+" "+name);}  
      
    public static void main(String args[]){  
    //creating objects  
    DefaultConstructor s1=new DefaultConstructor();  
    DefaultConstructor s2=new DefaultConstructor();  
    //displaying values of the object  
    s1.display();  
    s2.display();  
    }  
    }  