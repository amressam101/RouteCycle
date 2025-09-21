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
    Person();

    // Constructor pra
    Person(int id , string name , string password);

    // Setters

    void setId(int id);
    void setName(string name);
    void setPassword(string password);

    // Getter

    int getId();
    string getName();
    string  getPassword();

    // Method 

    void display();
};