#pragma once
#include <vector>
#include <sstream>
#include <string>

// Forward declarations instead of includes
class Client;
class Employee;
class Admin;

class Parser {
public:
    static std::vector<std::string> split(std::string line);
    static Client parserToClient(std::string line);
    static Employee parserToEmployee(std::string line);
    static Admin parserToAdmin(std::string line);
};