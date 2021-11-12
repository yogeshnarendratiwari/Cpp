// Friend Classes & Member friend functions

#include <iostream>
using namespace std;
// forward declaration
class Complex;

class Calculator
{
public:
    int add(int x, int y)
    {
        return (x + y);
    }
    int SumRealComplex(Complex o1, Complex o2); // declaration before class complex
    int SumIComplex(Complex o1, Complex o2);
};
// about class complex
class Complex
{
    int a, b;

    // friend int Calculator ::SumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::SumIComplex(Complex o1, Complex o2); // Individually declaring function as friend

    // Declaring entire calculator class as friend
    friend class Calculator;

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
};
// sumRealComplex definition
int Calculator ::SumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int Calculator ::SumIComplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    Complex c1, c2;
    c1.setNumber(1, 2);
    c2.setNumber(3, 4);
    Calculator calci;
    cout << calci.SumRealComplex(c1, c2) << "+" << calci.SumIComplex(c1, c2) << "i" << endl;

    return 0;
}