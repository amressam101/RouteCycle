#pragma once

#include "Employee.hpp"
#include "Client.hpp"


class Admin : public Employee{
private:

public:

    //Def Constructor
    Admin();


    //Para Constructor

    Admin(int id ,string name ,string password ,double salary);
    void listEmployee() ;
    Employee* searchEmployee(int empId);
    void addEmployee(Employee& e);
    void listClient();
    Client* searchClient(int clientId);
    void addClient(Client& c);
    void saveAdmin();

};



