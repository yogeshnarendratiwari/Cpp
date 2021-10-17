#include <iostream>
using namespace std;
int main(){
    int i,*j ,k;
    i=8;
    k=7;
    j=&i;
    cout<<i**j*i+k+*j<<endl;
    // Output will be 
    // i^3+k+i
}