#include <iostream>
#include "FileManager.hpp"
#include "DataSourceInterface.hpp"
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
using namespace std;

int main(){

    Client c(1,"AmrEssam","amressam",2000);
    Employee e(1,"AhmadMaher","ahmadmaher",6000);
    Admin a(1,"IbrahiemAlii","ibreahiemalii",10000);
    FileManager fm;
    fm.addClient(c);
    fm.addEmployee(e);
    fm.addAdmin(a);
    return 0;
}