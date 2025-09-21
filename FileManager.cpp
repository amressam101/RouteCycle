#include "FileManager.hpp"
#include "Parser.hpp"
#include <fstream>
using namespace std;

 // ALL ADD Class:

void FileManager::addClient(Client& c) {
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
    
void FileManager::addEmployee(Employee& e){
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

void FileManager::addAdmin(Admin& a){
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
    
vector<Client> FileManager::getAllClients(){
    vector<Client> clients;
    ifstream file("Clients.txt");
    if (!file.is_open()){
        cout << "Error: Cannot open Clients.txt file!\n";
        return clients;
    }
    string line;
    while(getline(file,line)){
        Client c = Parser::parserToClient(line);
        clients.push_back(c);
    }
    file.close();
    return clients;
}

vector<Employee> FileManager::getAllEmployees(){
    vector<Employee> employees;
    ifstream file("Employees.txt");
    if (!file.is_open()){
        cout << "Error: Cannot open Employees.txt file!\n";
        return employees;
    }
    string line;
    while(getline(file,line)){
        Employee e = Parser::parserToEmployee(line);
        employees.push_back(e);
    }
    file.close();
    return employees;
}
    
vector<Admin> FileManager::getAllAdmins(){
    vector<Admin> admin;
    ifstream file("Admins.txt");
    if (!file.is_open()){
        cout << "Error: Cannot open Admins.txt file!\n";
        return admin;
    }
    string line;
    while(getline(file,line)){
        Admin a = Parser::parserToAdmin(line);
        admin.push_back(a);
    }
    file.close();
    return admin;
}


    // All Remove Class:

void FileManager::removeAllClients(){
    ofstream file("Clients.txt",ios::trunc);
}

void FileManager::removeAllEmployees(){
    ofstream file("Employees.txt",ios::trunc);
}

void FileManager::removeAllAdmins(){
    ofstream file("Admins.txt",ios::trunc);
}