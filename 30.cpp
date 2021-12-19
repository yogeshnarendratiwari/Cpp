// Insertion operator overloading

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

   friend ostream & operator<<(ostream &o , Complex &c);
};

ostream & operator<<(ostream & o , Complex &c){
    o<<c.real<<"+"<<c.imaginary<<"i"<<endl;
    return o; // ***
}

int main()
{
    Complex c(3, 4);
    cout<<c; // --> cout<<c replaced by cout  (from ***)
    
}