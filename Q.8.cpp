#include <iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3};
    int *p = arr;
    cout<<"size of arr : "<<sizeof(arr)<<endl;
    cout<<"size of p : "<<sizeof(p)<<endl;
    // Size of pointer is fixed for a compiler
}