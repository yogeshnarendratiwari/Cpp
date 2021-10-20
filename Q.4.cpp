#include <iostream>
using namespace std;
int main()
{
    int x = 20, *y, *z;
    y = &x;
    z = y;
    *y++;
    *z++;
    x++;
    cout << x << " " << y << " " << z << endl;
}