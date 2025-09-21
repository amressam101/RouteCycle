#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#pragma once
#include "Person.hpp"

class Employee :public Person{

private:

    double salary;

public:

    //Def Constructor

    Employee(){
        this->salary = 0;
    }

    //Para Constructor

    Employee(int id,string name,string password,double salary):Person(id,name,password){
        setSalary(salary);
    }


    //Setters

    void setSalary(double salary){
        this->salary = Validation::enterSalary(salary);
    }

    //Getter

    double getSalary(){
        return salary;
    }


    //INFO

    void display(){
        Person::display();
        cout<<"Salary: "<< this->salary <<endl;
        cout << "===========================\n";
    }


};





#endif //EMPLOYEE_H
