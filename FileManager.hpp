#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Parser.hpp"
#include "DataSourceInterface.hpp"
#include "Person.hpp"
using namespace std;

class FileManager : public DataSourceInterface{

public:
    // ALL ADD Class:

    void addClient(Client& c) {
        string fileClient = "Clients.txt";
        ofstream file;
        file.open(fileClient,ios::app);
        if (file.is_open()){
            file << c.getId() << "," << c.getName() << "," << c.getPassword() << "," << c.getBalance() << endl;
            file.close();
        }else{
            cout << "Error: Can't Open The File!..\n";
        }
    }
    
    void addEmployee(Employee& e){
        string fileEmployee = "Employees.txt";
        ofstream file;
        file.open(fileEmployee,ios::app);
        if (file.is_open()){
            file << e.getId() << "," << e.getName() << "," << e.getPassword() << "," << e.getSalary() << endl;
            file.close();
        }else{
            cout << "Error: Can't Open The File!..\n";
        }
    }

    void addAdmin(Admin& a){
        string fileAdmin = "Admins.txt";
        ofstream file;
        file.open(fileAdmin,ios::app);
        if (file.is_open()){
            file << a.getId() << "," << a.getName() << "," << a.getPassword() << "," << a.getSalary() << endl;
            file.close();
        }else{
            cout << "Error: Can't Open The File!..\n";
        }

    }

    // All Get  Class:
    
    vector<Client> getAllClients(){
        vector<Client> clients;
        ifstream file("Clients.txt");
        string line;
        while(getline(file,line)){
            Client c = Parser::parserToClient(line);
            clients.push_back(c);
        }
        file.close();
        return clients;
    }

    vector<Employee> getAllEmployees(){
        vector<Employee> employees;
        ifstream file("Employees.txt");
        string line;
        while(getline(file,line)){
            Employee e = Parser::parserToEmployee(line);
            employees.push_back(e);
        }
        file.close();
        return employees;
    }
    
    vector<Admin> getAllAdmins(){
        vector<Admin> admin;
        ifstream file("Admins.txt");
        string line;
        while(getline(file,line)){
            Admin a = Parser::parserToAdmin(line);
            admin.push_back(a);
        }
        file.close();
        return admin;
    }


    // All Remove Class:

    void removeAllClients(){
        ofstream file("Clients.txt",ios::trunc);
    }

    void removeAllEmployees(){
        ofstream file("Employees.txt",ios::trunc);
    }

    void removeAllAdmins(){
        ofstream file("Admins.txt",ios::trunc);
    }

};