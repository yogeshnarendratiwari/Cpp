// More on Friend function

#include <iostream>
using namespace std;

class Y;

class X
{
    int x;
    friend void add(X, Y);

public:
    void setValue(int val1)
    {
        x = val1;
    }
};

class Y
{
    int y;
    friend void add(X, Y);

public:
    void setValue(int val2)
    {
        y = val2;
    }
};

void add(X x1, Y y1)
{
    cout << "The sum is " << x1.x + y1.y << endl;
}
int main()
{
    X x2;
    Y y2;
    x2.setValue(3);
    y2.setValue(4);
    add(x2, y2);
}