#include "Employee.hpp"
#include "Validation.hpp"
#include "FileManager.hpp"
#include <iostream>
using namespace std;

// Def Constructor
Employee::Employee(){
    this->salary = 0;
}

// Para Constructor
Employee::Employee(int id , string name, string password, double salary) : Person(id, name,password){
    setSalary(salary);
}

// Setters 
void Employee::setSalary(double salary){
    this->salary = Validation::enterSalary(salary);
}


// Getters
double Employee::getSalary(){
    return salary;
}

// INFO
void Employee::display(){
    Person::display();
    cout<<"Salary: "<< this->salary <<endl;
    cout << "===========================\n";
}

// Employee Add a Client 
void Employee::addClient(Client& client){
    FileManager fm;
    fm.addClient(client);
}

// Employee Search a Client 
Client* Employee::searchClient(int id){
    FileManager fm;
    vector<Client> client = fm.getAllClients();
    for(auto& c : client){
        c.display();
    }
    return NULL;
}

// Employee List All a Clients 
void Employee::listClient(){
    FileManager fm;
    vector<Client> client = fm.getAllClients();
    if (client.empty()){
        cout << "No Clients Found!\n";
    }
    for (auto& c : client){
        c.display();
    }
}

// Employee Edit a Client
void Employee::editClient(int id , string name, string password, double balance){
    FileManager fm;
    vector<Client> client = fm.getAllClients();
    for (auto& c : client){
        if(c.getId() == id){
            c.setName(name);
            c.setPassword(password);
            c.setBalance(balance);
        }
    }
    fm.removeAllClients();
    for (auto& c : client){
        fm.addClient(c);
    }
}
