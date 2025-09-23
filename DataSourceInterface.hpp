#pragma once
#include <vector>

using namespace std;
class Client;
class Employee;
class Admin;
class DataSourceInterface{
public:

    // Method Add Object From Class
    virtual void addClient(Client& c) = 0;
    virtual void addEmployee(Employee& e) = 0;
    virtual void addAdmin(Admin& a) = 0;

    // Method GetAll Objcat From Class 
    virtual vector<Client> getAllClients() = 0;
    virtual vector<Employee> getAllEmployees() = 0;
    virtual vector<Admin> getAllAdmins() = 0;


    // Method RemoveAll objcat From Class
    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;

};

