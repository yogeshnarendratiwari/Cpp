// Array of objects 

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        salary = 1000;
        cout << "Enter id of employee"
             << " : ";
        cin >> id;
    }
    void getId()
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee Yogesh;
    // Yogesh.setId();
    // Yogesh.getId();

    Employee fb[5];
    for(int i=0 ; i<5 ; i++){
        fb[i].setId();
        fb[i].getId();
    }

}
