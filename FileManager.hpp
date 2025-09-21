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

    void addClient(Client& c);
    
    void addEmployee(Employee& e);

    void addAdmin(Admin& a);

    // All Get  Class:
    
    vector<Client> getAllClients();

    vector<Employee> getAllEmployees();
    
    vector<Admin> getAllAdmins();


    // All Remove Class:

    void removeAllClients();

    void removeAllEmployees();

    void removeAllAdmins();

};