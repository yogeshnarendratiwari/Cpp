// static data members and methods in OOPS

#include <iostream>
using namespace std;

class Employee
{
    static int count; // by default initialize to 0
    int id;

public:
    void setData(void)
    {
        cout << "Enter the id : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Your id : ";
        cout << id << endl<<"The count of this is : " <<count<<endl;
    }
};

int Employee :: count;
int main()
{
    Employee yogesh, suresh, mahesh;
    yogesh.setData();
    yogesh.getData();

    suresh.setData();
    suresh.getData();

    mahesh.setData();
    mahesh.getData();
}