#include "Admin.hpp"
#include "FileManager.hpp"
#include <iostream>
using namespace std;

Admin::Admin() : Employee(){}

Admin::Admin(int id , string name , string password , double salary) : Employee(id,name,password,salary){}