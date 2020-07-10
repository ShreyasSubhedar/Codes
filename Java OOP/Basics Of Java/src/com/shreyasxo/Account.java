package com.shreyasxo;

public class Account {
    private float balance;

    public float getBalance() {
        return balance;
    }
    public void deposite(double amount){
        if(amount>0)
        balance+=amount;
    }
    public void withdraw(double amount){
        if(amount>0)
            balance-=amount;
    }


}
