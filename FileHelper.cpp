#include "FileHelper.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void FileHelper::saveLast(const string& fileName, int id) {
    ofstream file(fileName);
    if(file.is_open()) {
        file << id;
        file.close();
    } else {
        cout << "Cannot open file to save last id: " << fileName << endl;
    }
}

int FileHelper::getLast(const string& fileName) {

    ifstream file(fileName);

    int id = 0;

    if (file.is_open()) {
        file >> id ;
        file.close();
    }

    else {
        cout << "Cannot open file to get last id: " << fileName << endl;
    }

    return id;
}

void FileHelper::saveClient(const Client& c) {
    const string clientsFile = "Clients.txt";
    const string lastIdFile = "clients_last_id.txt";
    ofstream file(clientsFile, ios::app);
    if (file.is_open()) {
        file << c.getId() << "," << c.getName() << "," << c.getPassword() << "," << c.getBalance() << endl;
        file.close();
        saveLast(lastIdFile, c.getId());
    } else {
        cout << "Cannot open clients file to save client." << endl;
    }
}

void FileHelper::saveEmployee( const string& fileName , const string& lastIdFile , const Employee& e) {

    ofstream file(fileName, ios::app);
    if (file.is_open()) {
        file << e.getId() << "," << e.getName() << "," << e.getPassword() << "," << e.getSalary() << endl;
        file.close();
        saveLast(lastIdFile, e.getId());
    } else {
        cout << "Cannot open employee file to save employee: " << fileName << endl;
    }
}

void FileHelper::saveAdmin(const string& fileName, const string& lastIdFile, const Admin& a) {
    ofstream file(fileName, ios::app);
    if (file.is_open()) {
        file << a.getId() << "," << a.getName() << "," << a.getPassword() << "," << a.getSalary() << endl;
        file.close();
        saveLast(lastIdFile, a.getId());
    } else {
        cout << "Cannot open admin file to save admin: " << fileName << endl;
    }
}

vector<Client> FileHelper::getClients() {
    vector<Client> clients;
    const string clientsFile = "Clients.txt";
    ifstream file(clientsFile);
    if(file.is_open()) {
        string line;
        while (getline(file, line)) {
            if (!line.empty()) {
                size_t pos1 = line.find(',');
                size_t pos2 = line.find(',', pos1 + 1);
                size_t pos3 = line.find(',', pos2 + 1);

                int id = stoi(line.substr(0, pos1));
                string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
                string password = line.substr(pos2 + 1, pos3 - pos2 - 1);
                double balance = stod(line.substr(pos3 + 1));

                clients.push_back(Client(id, name, password, balance));
            }
        }
        file.close();
    } else {
        cout << "Cannot open clients file to read." << endl;
    }
    return clients;
}

vector<Employee> FileHelper::getEmployees() {
    vector<Employee> employees;
    const string employeesFile = "Employees.txt";
    ifstream file(employeesFile);
    if(file.is_open()) {
        string line;
        while(getline(file, line)) {
            if(!line.empty()) {
                size_t pos1 = line.find(',');
                size_t pos2 = line.find(',', pos1 + 1);
                size_t pos3 = line.find(',', pos2 + 1);

                int id = stoi(line.substr(0, pos1));
                string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
                string password = line.substr(pos2 + 1, pos3 - pos2 - 1);
                double salary = stod(line.substr(pos3 + 1));

                employees.push_back(Employee(id, name, password, salary));
            }
        }
        file.close();
    } else {
        cout << "Cannot open employees file to read." << endl;
    }
    return employees;
}

vector<Admin> FileHelper::getAdmins() {
    vector<Admin> admins;
    const string adminsFile = "Admins.txt";
    ifstream file(adminsFile);
    if(file.is_open()) {
        string line;
        while(getline(file, line)) {
            if(!line.empty()) {
                size_t pos1 = line.find(',');
                size_t pos2 = line.find(',', pos1 + 1);
                size_t pos3 = line.find(',', pos2 + 1);

                int id = stoi(line.substr(0, pos1));
                string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
                string password = line.substr(pos2 + 1, pos3 - pos2 - 1);
                double salary = stod(line.substr(pos3 + 1));

                admins.push_back(Admin(id, name, password, salary));
            }
        }
        file.close();
    } else {
        cout << "Cannot open admins file to read." << endl;
    }
    return admins;
}

void FileHelper::clearFile(const string& fileName, const string& lastIdFile) {
    ofstream file(fileName, ios::trunc);
    if (file.is_open()) {
        file.close();
        saveLast(lastIdFile, 0);
    } else {
        cout << "Cannot open file to clear: " << fileName << endl;
    }
}