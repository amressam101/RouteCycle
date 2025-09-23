#include "Person.hpp"
#include <iostream>
#include "Admin.hpp"
#include "Employee.hpp"
#include "FileManager.hpp"
#include "Client.hpp"
#include "FileHelper.hpp"

using namespace std;

int main() {


    FileHelper fh;
    FileManager fm;

     fm.removeAllAdmins();
     fm.removeAllClients();
     fm.removeAllEmployees();

    Admin admin(1, "Seifsaad","Seifsaad1234",9000);
    Client c1(100, "TestClient", "Pass12345", 2000);
    Employee e1(110 , "MaherPlusPlus","Maher1234",7500);

    // admin.addEmployee(e1);
    // e1.addClient(c1);

    fm.addEmployee(e1);
    fm.addClient(c1);
    fm.addAdmin(admin);
    e1.searchClient(100);
    admin.searchEmployee(110);
    //e1.display();

   // delete admin.searchClient(100);

    //admin.listEmployee();

    return 0;

    // Test Employee method

    // cout << "\n==== Employee Add Client ===\n";
    // Employee e1(3,"saraAli", "saraali123", 6000);
    // Client c3(12, "Ahmedmohamed" , "ahmed1234", 6000);
    // e1.addClient(c3);
    //
    // cout << "\n=== Employee Listing Clients ===\n";
    // e1.listClient();



    // FileHelper fh;
    // FileManager fm;
    //
    // fh.clearFile("Clients.txt","clients_last_id.txt");
    // Client c1(1,"AmrEssam","amressam",4800);
    // Client c2(12,"Seifsaaaaad","amressam",6555);
    // Client c3(13, "seifsaads","amressam",9000);
    //
    // fm.addClient(c1);
    // fm.addClient(c2);
    // fm.addClient(c3);
    //
    //
    // fh.saveLast("clients_last_id.txt" , 13);
    // cout<<fh.getLast("clients_last_id.txt");




    //fm.addClient(c1);


    // Test Add 
    // fm.addClient(c1);
    // fm.addClient(c2);
    // fm.addEmployee(e1);
    // fm.addAdmin(a1);
    //
    // cout << "\n======== ALL Client =========\n";
    // vector<Client> clients = fm.getAllClients();
    // for (auto& c : clients){
    //     c.display();
    // }
    //
    // cout << "\n======== ALL Employees =========\n";
    // vector<Employee> employee = fm.getAllEmployees();
    // for (auto& e : employee){
    //     e.display();
    // }
    //
    //
    // cout << "\n======== ALL Admins =========\n";
    // vector<Admin> admin = fm.getAllAdmins();
    //
    // for (auto& a : admin){
    //     a.display();
    // }
    //
    //



    
    return 0;
}