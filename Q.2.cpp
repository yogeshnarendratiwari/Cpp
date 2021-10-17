#include <iostream>
using namespace std;
int main(){
    int a = 4;
    int *ptr = &a; // Storing address of a in ptr
    *ptr=*ptr*4 ;//*ptr = a Dereferencing of ptr
    cout<<a<<endl;
    cout<<*ptr<<endl;
    //Output will be 16
}