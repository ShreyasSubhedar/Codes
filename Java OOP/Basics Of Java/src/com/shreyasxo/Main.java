package com.shreyasxo;

public class Main {
    public static TaxCalculator getCalculator() {
        return new TaxCalculator2019();
    }

    public static void main(String[] args) {
        // write your code here
        System.out.println("Using classes and object terminology!!");
        User user = new User("Shreyas");
        System.out.println(user.name);

        user.sayHello();

        System.out.println("Understanding coupling\n");

        // 1 Here the main class is coupled with User class and
        // if user class changes the attribute then
        // main class will face the issue due to tightly coupled
        // 2 If we do the simple change in user class ,
        // to reflect those changes we have to compile with main class
        // all the classes which are coupled need to
        // recompiled every time we compile the main class.
        System.out.println("Understanding interfaces\n");

        System.out.println("Interface is the contract that specifies the capabilities that class should provide");
        // Here if we need to modify the TaxCalculation we can easily
        // do it because we are programming to interface
        // and not the method any particular class.
        TaxCalculator calculator = getCalculator();
        System.out.println(calculator.calculateTax());

        System.out.println("Understanding Encapsulation\n");
        // Bundling the data/ methods in one unit and hiding the
        // values or state of the object inside the class.
        // Using encapsulation we can safe our classes/object
        // to go into danger zones

        Account account = new Account();
        account.deposite(2432432);
        account.withdraw(345);

        System.out.println(account.getBalance());

        System.out.println("Understanding Abstraction\n");
        // reduce complexity by hiding unnecessary details
        // Ex. Remote
        // Lets say we want to send the email

        MailService mailService = new MailService();
        mailService.sendEmail();

        System.out.println("Understanding Interface\n");
        // reusing the code
        // Lets say we wanna create a GUI framework which contains
        // many functionalities  such as TextBox, Button, CheckBox etc...
        // every functionality is having some common behaviour such as :
        // enable() focus() disable() etc....
        // if we write these methods to each separate class then
        // there'll be lot of code duplication
        // hence we use Inheritance
        // Here Ui Control is parent class and TextBox is derived class
        TextBox textBox = new TextBox();
        textBox.enable();

        System.out.println("Understanding Polymorphism\n");
        // many forms
        drawUIControl(new TextBox());
        drawUIControl(new CheckBox());

    }

    public static void  drawUIControl(UIControl control){
        control.draw();
    }
}
