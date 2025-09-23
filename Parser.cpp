#include "Parser.hpp"
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
#include <sstream>

using namespace std;

vector<string> Parser::split(string line){
    vector<string> items;
    string item;
    stringstream ss(line);
    while(getline(ss, item, ',')){
        items.push_back(item);
    }
    return items;
}

Client Parser::parserToClient(string line){
    vector<string> data = split(line);
    int id = stoi(data[0]);
    string name = data[1];
    string password = data[2];
    double balance = stod(data[3]);
    return Client(id, name, password, balance);
}

Employee Parser::parserToEmployee(string line){
    vector<string> data = split(line);
    int id = stoi(data[0]);
    string name = data[1];
    string password = data[2];
    double salary = stod(data[3]);
    return Employee(id, name, password, salary);
}

Admin Parser::parserToAdmin(string line){
    vector<string> data = split(line);
    int id = stoi(data[0]);
    string name = data[1];
    string password = data[2];
    double salary = stod(data[3]);
    return Admin(id, name, password, salary);
}