#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "DataSourceInterface.hpp"

// Forward declarations
class Client;
class Employee;
class Admin;
class Parser;

class FileManager : public DataSourceInterface {
public:
    void addClient(Client& c);
    void addEmployee(Employee& e);
    void addAdmin(Admin& a);

    std::vector<Client> getAllClients();
    std::vector<Employee> getAllEmployees();
    std::vector<Admin> getAllAdmins();

    void removeAllClients();
    void removeAllEmployees();
    void removeAllAdmins();
};