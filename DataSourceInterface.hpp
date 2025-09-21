#pragma once
#include <iostream>
#include <vector>
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
using namespace std;

class DataSourceInterface{
public:

    // Method Add Objcat From Class
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