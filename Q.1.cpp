#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int *ptr;
    ptr=arr;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
}