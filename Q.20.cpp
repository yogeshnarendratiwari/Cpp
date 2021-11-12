//Friend Function

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << "The complex number is : " << a << "+" << b << "i" << endl;
    }
    friend Complex sumComplex(Complex c1, Complex c2); // Not a member functions but can access its private members & can be public or private 
};

Complex sumComplex(Complex c1, Complex c2){
// cout<<a; --> need object.member to access that member
    Complex c3;
    c3.setNumber((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 2);
    c1.print();
    c2.setNumber(3, 4);
    // c1.sumComplex() --> can't access because sumComplex is not a member function of that class 
    c2.print();
    sum = sumComplex(c1, c2);
    sum.print();
    return 0;
}