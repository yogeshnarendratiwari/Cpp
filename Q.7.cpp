#include <iostream>
using namespace std;
void func(int x)
{
    x=30;
}
int main(){
    int y=20;
    func(y);
    cout<<y<<endl;
    return 0;

}