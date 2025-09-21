#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"

class Parser {
public:

    static vector<string> spilt(string line){
        vector<string>items;
        string name;
        stringstream ss(line);
        while(getline(ss,name,',')){
            items.push_back(name);
        }
        return items;
    }

    static Client parserToClient(string line){
        vector<string> data = spilt(line);
        int id = stoi(data[0]);
        string name = data[1];
        string password = data[2];
        double balance = stod(data[3]);
        return Client(id,name,password,balance);
    }

    static Employee parserToEmployee(string line){
        vector<string> data = spilt(line);
        int id = stoi(data[0]);
        string name = data[1];
        string password = data[2];
        double salary = stod(data[3]);
        return Employee(id,name,password,salary);
    }

    static Admin parserToAdmin(string line){
        vector<string> data = spilt(line);
        int id = stoi(data[0]);
        string name = data[1];
        string password = data[2];
        double salary = stod(data[3]);
        return Admin(id,name,password,salary);
    }
};