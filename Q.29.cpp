//Friend  operator overloading

#include <iostream>
using namespace std;

class Complex
{

private
    :
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void display()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }

   friend Complex operator+(Complex c1,Complex c2);
};

Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

int main()
{
    Complex c1(3, 4);
    Complex c2(4, 3);
    Complex c3(1, 2);
    Complex c4(2, 1);
    Complex c;
    c = c1 + c2 + c3 + c4;
    c.display();
}