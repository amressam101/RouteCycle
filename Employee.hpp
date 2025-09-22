#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#pragma once
#include <iostream>
#include <vector>
#include "Person.hpp"
#include "Client.hpp"

class FileManager;
class Employee :public Person{

private:

    double salary;

public:

    //Def Constructor

    Employee();

    //Para Constructor

    Employee(int id,string name,string password,double salary);


    //Setters

    void setSalary(double salary);

    //Getter

    double getSalary() const;


    //INFO

    void display();

    void addClient(Client& client);
    Client* searchClient(int id);
    void listClient();
    void editClient(int id, string name, string password, double balance);


};





#endif //EMPLOYEE_H
