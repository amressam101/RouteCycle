# pragma once
#include <iostream>
#include "Validation.hpp"
using namespace std;

class Person {
protected:
    // Attributes

    int id;
    string name;
    string password;

public:

    // Constructor default
    Person(){
        this->id = 0;
    }

    // Constructor pra
    Person(int id , string name , string password){
        this->id = id;
        setName(name);
        setPassword(password);
    }

    // Setters

    void setId(int id){
        this->id = id;
    }

    void setName(string name){
        this->name = Validation::enterName(name);
    }
    void setPassword(string password){
        this->password = Validation::enterPassword(password);
    }

    // Getter

    int getId(){
        return this->id;
    }

    string getName(){
        return this->name;
    }

    string  getPassword(){
        return this->password;
    }

    // Method 

    void display(){
        cout << "Id: " << this->id << endl;
        cout << "Name: " << this->name << endl;
        cout << "Password: " << this->password << endl;
    }
};