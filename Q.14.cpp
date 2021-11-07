//----classes, public and private modifiers----

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1); // -- Declaration--
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
}yogesh,aman;

void Employee :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
    d=8;
}

int main()
{
    
    yogesh.d=2;
    yogesh.e=1;

    // yogesh.a=0; Inaccessible data type as a is private 

    yogesh.setData(5,4,3);
    yogesh.getData();
    aman.getData();
}