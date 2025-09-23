#pragma once
#include <string>
#include <vector>

class Client;
class Employee;
class Admin;

class FileHelper {
public:
    static void saveLast(const std::string& fileName, int id);
    static int getLast(const std::string& fileName);
    static void saveClient(const Client& c);
    static void saveEmployee(const std::string& fileName, const std::string& lastIdFile, const Employee& e);
    static void saveAdmin(const std::string& fileName, const std::string& lastIdFile, const Admin& a);
    static std::vector<Client> getClients();
    static std::vector<Employee> getEmployees();
    static std::vector<Admin> getAdmins();
    static void clearFile(const std::string& fileName, const std::string& lastIdFile);
};