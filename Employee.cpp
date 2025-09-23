#include "Employee.hpp"
#include "Client.hpp"
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
double Employee::getSalary()const{
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
    vector<Client> clients = fm.getAllClients();
    for(auto& c : clients){
        if(c.getId() == id) {
            cout << "====Client Found====\n"<<"ID : "<< c.getId()<<endl<<"Name : "<< c.getName()<<endl<<"====================" <<endl ;
            Client* foundClient = new Client(c.getId(), c.getName(), c.getPassword(), c.getBalance());
            return foundClient;
        }
    }
    cout << "Client Not Found" << endl;
    return nullptr;  // Add this return statement
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