package com.shreyasxo;

public class MailService {
    private void connect() {
        System.out.println("Connection establised");

    }

    private void disConnect() {
        System.out.println("Connection closed");

    }

    private void authenticate() {
        System.out.println("Authentication completed");

    }

    public void sendEmail() {
        authenticate();
        connect();
        // Any process regarding email
        System.out.println("Email sent");
        disConnect();
    }
}
