#include "Admin.hpp"
#include "FileManager.hpp"
#include "Parser.hpp"
#include <iostream>

using namespace std;

Admin::Admin() : Employee(){}

Admin::Admin(int id , string name , string password , double salary) : Employee(id,name,password,salary){}

void Admin::saveAdmin(){

        ofstream file("Admins.txt", ios::app);

        if (file.is_open()) {

            file << getId() << " " << getName() << " " << getPassword() << " " << getSalary() << endl;
            file.close();

        }
    }

    void Admin::addClient(Client& c) {
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
            size_t pos1 = line.find(',');
            size_t pos2 = line.find(',', pos1 + 1);
            size_t pos3 = line.find(',', pos2 + 1);

            int id = stoi(line.substr(0, pos1));
            string n = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string p = line.substr(pos2 + 1, pos3 - pos2 - 1);
            double b = stod(line.substr(pos3 + 1));
            if (id == clientId) {
                cout << "Client Found: " << id << n << endl;
                Client* c = new Client(id, n, p, b);
                return c;
           }
        }
        cout << "Client Not Found" << endl;
        return 0;
    }

    void Admin::listClient() {
        ifstream file("Clients.txt");
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }

    void Admin::addEmployee(Employee& e) {
        ofstream file("Employees.txt", ios::app);
        if (file.is_open()) {
            file << e.getId() << " "
                 << e.getName() << " "
                 << e.getPassword() << " "
                 << e.getSalary() << endl;
            file.close();
        }
    }

    Employee* Admin::searchEmployee(int empId) {
        ifstream file("Employees.txt");
        string line;
        while (getline(file, line)) {
            int id; string n, p; double s;
            istringstream iss(line);
            iss >> id >> n >> p >> s;
            if (id == empId) {
                cout << "Employee Found: " <<id<< n << endl;
                Employee* e = new Employee();
                return e;
            }
        }
        cout << "Employee Not Found" << endl;
        return 0;
    }

    void Admin::listEmployee() {
        ifstream file("Employees.txt");
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }
