#pragma once
#include <string>
#include "Person.hpp"
#include "Client.hpp"

// Forward declaration instead of include
class FileManager;

class Employee : public Person {
private:
    double salary;

public:
    Employee();
    Employee(int id, std::string name, std::string password, double salary);

    void setSalary(double salary);
    double getSalary() const;

    void display();

    void addClient(Client& client);
    Client* searchClient(int id);
    void listClient();
    void editClient(int id, std::string name, std::string password, double balance);
};