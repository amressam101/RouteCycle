#include <iostream>
#include <vector>

#include "Person.hpp"
#include "Parser.hpp"
#include "FileManager.hpp"
#include "Client.hpp"
#include "DataSourceInterface.hpp"
#include "FileHelper.hpp"

using namespace std;

int main(){
    FileHelper fh;
    FileManager fm;

    fh.clearFile("Clients.txt","clients_last_id.txt");
    Client c1(1,"AmrEssam","amressam",4800);
    Client c2(12,"Seifsaaaaad","amressam",6555);
    Client c3(13, "seifsaads","amressam",9000);

    fm.addClient(c1);
    fm.addClient(c2);
    fm.addClient(c3);


    fh.saveLast("clients_last_id.txt" , 13);
    cout<<fh.getLast("clients_last_id.txt");




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
    // // Test Employee method
    //
    // cout << "\n==== Employee Add Client ===\n";
    // Client c3(3,"saraAli", "saraali123", 4000);
    // e1.addClient(c3);
    //
    // cout << "\n=== Employee Listing Clients ===\n";
    // e1.listClient();
    
    return 0;
}