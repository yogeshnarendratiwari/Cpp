// operator overloading

#include <iostream>
using namespace std;

class Complex
{

public
    :
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex operator+(Complex x){
        Complex temp;
        temp.real = x.real+real;
        temp.imaginary = x.imaginary + imaginary;
        return temp;
    }
};

int main()
{
    Complex c1(3,4);
    Complex c2(4,3);
    Complex c3(1,2);
    Complex c4(2,1);
    Complex c;
    c = c1+c2+c3+c4;
    cout<<c.real<<"+"<<c.imaginary<<"i"<<endl;
}