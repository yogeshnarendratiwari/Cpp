// Function overloading

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
// string add(int a,int b){
//     return to_string(a) + to_string(b);
// }
/*Overloading can't possible only by changing return type
 only be possible by changing number of arguments ;*/

double area(double l, double b)
{
    return l * b;
}

double volume(double l, double b, double h)
{
    return l * b * h;
}

int main()
{
    cout << "The sum of 3 and 4 is : " << add(3, 4) << endl;
    // cout<<"The string is : "<<add(3,4)<<endl;
    cout << "The sum of 3 , 4 and 5 is : " << add(3, 4, 5) << endl;
    cout << "The area of rectangle with length 3.5 and breadth 2.0 is : " << area(3.5, 2.0) << endl;
    cout << "The volume of cuboid with length 3.5 , breadth 2.0 and height 1.5 is :" << volume(3.5, 2.0, 1.5) << endl;
}