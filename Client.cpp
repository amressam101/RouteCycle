


#include "Client.hpp"




Client::Client(){
    this->balance = 0;
}
    
// Constructor para

Client::Client(int id , string name , string password , double balance) : Person(id,name,password){
    setBalance(balance);
}



// Method

void Client::setBalance(double balance) {
    this->balance = Validation::enterBalance(balance);
}



double Client::getBalance() const{
    return this->balance;
}

void Client::deposit(double amount) {
    if (amount > 0) {
        this->balance += amount;
    }
    else {
        cout << " Deposit amount must be positive" << endl;
    }
}
void Client::withdraw(double amount) {
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

void Client::transferTo(double amount, Client& recipient) {
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

void Client::checkBalance() {
    cout << "Current Balance: " << this->balance << endl;
}

void Client::display() {
    Person::display();
    cout << "Balance: " << this->balance << endl;
    cout << "====================================\n";
}
