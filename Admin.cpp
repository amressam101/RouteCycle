
#include "Admin.hpp"
#include "FileManager.hpp"
#include "FileHelper.hpp"
#include <iostream>
#include <fstream>
#include <optional>


using namespace std;

Admin::Admin() : Employee(){}

Admin::Admin(int id , string name , string password , double salary) : Employee(id,name,password,salary){}

void Admin::saveAdmin(){

        ofstream file("Admins.txt", ios::app);

        if (file.is_open()) {

            file << getId() << "," << getName() << "," << getPassword() << "," << getSalary() << endl;
            file.close();

        }
    }

    void Admin::addClient(Client& c) {
    FileManager f;
    vector<Client> existingClients = f.getAllClients();
    for (auto& client :existingClients) {
        if (client.getId() == c.getId()) {
            cout << "Client with ID " << c.getId() << " already exists!\n";
            return;
        }
    }
        ofstream file("Clients.txt", ios::app);
        if (file.is_open()) {
            file << c.getId() << ","
                 << c.getName() << ","
                 << c.getPassword() << ","
                 << c.getBalance() << endl;
            file.close();
        }
    }

    Client* Admin::searchClient(int clientId) {
        ifstream file("Clients.txt");
        string line;
        while (getline(file, line)) {
            if (line.empty()) continue;
            size_t pos1 = line.find(',');
            size_t pos2 = line.find(',', pos1 + 1);
            size_t pos3 = line.find(',', pos2 + 1);

            int id = stoi(line.substr(0, pos1));
            string n = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string p = line.substr(pos2 + 1, pos3 - pos2 - 1);
            double b = stod(line.substr(pos3 + 1));
            if (id == clientId) {
                cout << "====Client Found====\n" <<"ID : "<< id <<endl<< "Name:  "<< n << endl <<"===================="<<endl;
                Client* c = new Client(id, n, p, b);
                file.close();
                return c;
           }
        }
    file.close();
        cout << "Client Not Found" << endl;
         return nullptr;
    }

    void Admin::listClient() {
        ifstream file("Clients.txt");
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }

    void Admin::addEmployee(Employee& e) {
    FileManager f;
    vector<Employee> existingEmployees = f.getAllEmployees();
    for (auto& employee :existingEmployees) {
        if (employee.getId() == e.getId()) {
            cout << "Employee with ID " << e.getId() << " already exists!\n";

            return;
        }
    }
        ofstream file("Employees.txt", ios::app);
        if (file.is_open()) {
            file << e.getId() << ","
                 << e.getName() << ","
                 << e.getPassword() << ","
                 << e.getSalary() << endl;
            file.close();
        }
    }

    Employee* Admin::searchEmployee(int empId) {
        ifstream file("Employees.txt");
        string line;
        while (getline(file, line)) {
            if (line.empty()) continue;
            size_t pos1 = line.find(',');
            size_t pos2 = line.find(',', pos1 + 1);
            size_t pos3 = line.find(',', pos2 + 1);

            if (pos1 == string::npos || pos2 == string::npos || pos3 == string::npos) continue;

            int id = stoi(line.substr(0, pos1));
            string n = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string p = line.substr(pos2 + 1, pos3 - pos2 - 1);
            double s = stod(line.substr(pos3 + 1));

            if (id == empId) {
                cout << "===Employee Found===\n" <<"ID : "<< id <<endl<< "Name:  "<< n << endl <<"===================="<<endl;

                Employee* e = new Employee(id , n ,p , s);
                 file.close();
                return e;
            }
        }
    file.close();
    cout << "Employee Not Found" << endl;
    return nullptr;
}

    void Admin::listEmployee() {
        ifstream file("Employees.txt");
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }
