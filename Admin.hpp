#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.hpp"

class Admin : public Employee{
private:

public:

    //Def Constructor
    Admin();


    //Para Constructor

    Admin(int id ,string name ,string password ,double salary);

};



#endif //ADMIN_H