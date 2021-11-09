// static data members and methods in OOPS

#include <iostream>
using namespace std;

class Employee
{
    static int count; // by default initialize to 0
    int id;

public:
    // It can access only static members
    static void getCount()
    {
        cout << "The value of count is : " << count << endl;
    }
    void setData(void)
    {
        cout << "Enter the id : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Your id : ";
        cout << id << endl
             << "The count of this is : " << count << endl;
    }
};

int Employee ::count = 100; // intialize here if you want to do with value other than zero
int main()
{
    Employee yogesh, suresh, mahesh;
    yogesh.setData();
    yogesh.getData();
    Employee::getCount(); // can be access like this also
    yogesh.getCount();

    suresh.setData();
    suresh.getData();
    Employee::getCount();

    mahesh.setData();
    mahesh.getData();
    Employee::getCount();
}