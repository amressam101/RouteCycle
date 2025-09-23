#pragma once
#include <iostream>
#include <vector>

using namespace std;


class Validation{
private:

    // Used By Setter Check Name 
    static bool ValidationName(string name){
        for(int i = 0 ; i < name.size() ; i++){
            if (!( name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z')){ 
                return false;
            }
        }
        if (!(name.size() >= 5 && name.size() <= 20)){
            return false;
        }
        
        return true;
    }

    // Used By Setter Check Password 
    static bool ValidationPassword(string password){
        if((password.size() >= 8 && password.size() <= 20)) return true;
        else return false;
    }
    
    // Used By Check Balance
    static bool ValidationBalance(double balance){
        if (balance < 1500) return false;
        else return true;
    }

    // Used By Check Salary
    static bool ValidationSalary (double salary){
        
        if (salary < 5000 ) return false;
        else return true;
    }


public:

    static string enterName(string name){
        while(!ValidationName(name)){
            cout << "The Name Is Invalid!\n";
            cout << "The name must consist of 5 to 20 letters! \nand..\n";
            cout << "The name must be alphabetic!...\n";
            cout << "Please Try Once Again..\n";
            cout << "Enter Name: ";
            cin >> name;
            cout << endl;
        }
        return name;
    }
    
    static string enterPassword(string password){
        while(!ValidationPassword(password)){
            cout << "The Password Is Invalid!\nand..\n";
            cout << "The password must be from 8 to 20 characters!...\n";
            cout << "Please Try Once Again..\n";
            cout << "Enter Password: ";
            cin >> password;
            cout << endl;
        }
        return password;
    }
    
    static double enterBalance(double balance){
        while(!ValidationBalance(balance)){
            cout << "The Invalid Balance!..\nand..\n";
            cout << "The Operation Balance must be Above 1500$ ...\n";
            cout << "Please Try Once Again..\n";
            cout << "Enter Balance: ";
            cin >> balance;
            cout << endl;
        }
        return balance;
    }
    
    static double enterSalary(double salary){
        while(!ValidationSalary(salary)){
            cout << "The Invalid Salary!..\nand..\n";
            cout << "The Operation Salary must be Above 5000$ ...\n";
            cout << "Please Try Once Again..\n";
            cout << "Enter Salary: ";
            cin >> salary;
            cout << endl;
        }
        return salary;
    }

};