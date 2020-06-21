//Java program to overload constructors  
class ConstructerOverloading{  
    int id;  
    String name;  
    int age;  
    //creating two arg constructor  
    ConstructerOverloading(int i,String n){  
    id = i;  
    name = n;  
    }  
    //creating three arg constructor  
    ConstructerOverloading(int i,String n,int a){  
    id = i;  
    name = n;  
    age=a;  
    }  
    // creating copy constructer (passsing obj as a parameter)
    ConstructerOverloading(ConstructerOverloading obj){
        this.id = obj.id;
        this.name=obj.name;
        this.age=obj.age;
    }
    void display(){System.out.println(id+" "+name+" "+age);}  
   
    public static void main(String args[]){  
    ConstructerOverloading s1 = new ConstructerOverloading(111,"Karan");  
    ConstructerOverloading s2 = new ConstructerOverloading(222,"Aryan",25);  
    ConstructerOverloading s3 = new ConstructerOverloading(s2);
    s1.display();  
    s2.display();  
    s3.display();
   }  
}