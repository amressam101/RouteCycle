#include "Person.hpp"
using namespace std;

Person::Person(){
    this->id = 0;
}

// Constructor pra
Person::Person(int id , string name , string password){
    this->id = id;
    setName(name);
    setPassword(password);
}

// Setters

void Person::setId(int id){
    this->id = id;
}

void Person::setName(string name){
    this->name = Validation::enterName(name);
}
void Person::setPassword(string password){
    this->password = Validation::enterPassword(password);
}

// Getter

int Person::getId(){
    return this->id;
}

string Person::getName(){
    return this->name;
}

string  Person::getPassword(){
    return this->password;
}

// Method 

void Person::display(){
    cout << "Id: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Password: " << this->password << endl;
}