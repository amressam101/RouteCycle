#include <iostream>
#include <vector>
#include "FileManager.hpp"
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
using namespace std;

int main(){
    
    FileManager fm;
    Client c1(1,"AmrEssam","amressam",2000);
    Client c2(2,"uahsd","123456789",2500);
    Employee e1(1,"AhmadMaher","ahmadmaher",6000);
    Admin a1(1,"IbrahiemAlii","ibreahiemalii",10000);



    // Test Add 
    fm.addClient(c1);
    fm.addClient(c2);
    fm.addEmployee(e1);
    fm.addAdmin(a1);

    cout << "\n======== ALL Client =========\n";
    vector<Client> clients = fm.getAllClients();
    for (auto& c : clients){
        c.display();
    }
    
    cout << "\n======== ALL Employees =========\n";
    vector<Employee> employee = fm.getAllEmployees();
    for (auto& e : employee){
        e.display();
    }


    cout << "\n======== ALL Admins =========\n";
    vector<Admin> admin = fm.getAllAdmins();
    for (auto& a : admin){
        a.display();
    }
   

    // Test Employee method
    
    cout << "\n==== Employee Add Client ===\n";
    Client c3(3,"saraAli", "saraali123", 4000);
    e1.addClient(c3);

    cout << "\n=== Employee Listing Clients ===\n";
    e1.listClient();
    
    return 0;
}