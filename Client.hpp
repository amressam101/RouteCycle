#ifndef CLIENT_H
#define CLIENT_H
#pragma once
#include "Person.hpp"

class Client : public Person{
private:
    double balance;

public:

    //Constructor default

    Client();
    
    // Constructor pra

    Client(int id , string name , string password , double balance);

    // Method 
    void setBalance(double balance);

    double getBalance();

    void deposit(double amount);

    void withdraw(double amount);

    void transferTo(double amount, Client& recipient);

    void checkBalance();

    void display();
};



#endif 
