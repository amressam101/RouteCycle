#ifndef FILEHELPER_HPP
#define FILEHELPER_HPP

#include <string>
#include <vector>
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"

using namespace std;

class FileHelper {
public:
    static void saveLast(const string& fileName, int id);
    static int getLast(const string& fileName);
    static void saveClient(const Client& c);
    static void saveEmployee(const string& fileName, const string& lastIdFile, const Employee& e);
    static void saveAdmin(const string& fileName, const string& lastIdFile, const Admin& a);
    static vector<Client> getClients();
    static vector<Employee> getEmployees();
    static vector<Admin> getAdmins();
    static void clearFile(const string& fileName, const string& lastIdFile);
};

#endif