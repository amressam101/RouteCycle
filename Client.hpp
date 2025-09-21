//
// Created by TUF on 07/09/2025.
//

#ifndef CLIENT_H
#define CLIENT_H
#pragma once
#include "Person.hpp"

class Client : public Person{
private:
    double balance;

public:

    //Constructor default

    Client(){
        this->balance = 0;
    }
    
    // Constructor pra

    Client(int id , string name , string password , double balance) : Person(id,name,password){
        setBalance(balance);
    }

    // Method 
    void setBalance(double balance) {
        this->balance = Validation::enterBalance(balance);
    }

    double getBalance() {
        return this->balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            this->balance += amount;
        }
        else {
            cout << " Deposit amount must be positive" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount < 0) {
            cout << " Withdraw amount must be positive" << endl;
        }
        else if (amount > balance) {
            cout << " Not enough balance" << endl;
        }
        else {
            this->balance -= amount;
        }
    }

    void transferTo(double amount, Client& recipient) {
        if (amount < 0) {
            cout << "Transfer amount must be positive" << endl;
        }
        else if (amount > balance) {
            cout << "Not enough balance to transfer" << endl;
        }
        else {
            this->balance -= amount;
            recipient.balance += amount;
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << this->balance << endl;
    }

    void display() {
        Person::display();
        cout << "Balance: " << this->balance << endl;
        cout << "====================================\n";
    }
};



#endif //CLIENT_H
