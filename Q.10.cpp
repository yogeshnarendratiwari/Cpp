#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 15;
    for (int i = 0; i < 1; i++)
    {
        int x = 20;
        y = 15;
    }
    int mul = x * y;
    cout<<x<<" * "<<y<<" = "<<mul<<endl;
}