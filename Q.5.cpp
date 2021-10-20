#include <iostream>
using namespace std;
int main(){
    int x=10;
    int *y,**z;
    y=&x;
    z=&y;
    cout<<x<<" "<<*y<<" "<<**z<<endl;
}
