// Extraction operator overloading

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
   friend istream & operator>>(istream & i , Complex &c);
};

ostream & operator<<(ostream & o , Complex &c){
    o<<c.real<<"+"<<c.imaginary<<"i"<<endl;
    return o; // ***
}
istream & operator>>(istream & i , Complex &c){
   i>>c.real>>c.imaginary;

}

int main()
{
    Complex c;
    cin>>c;
    cout<<c; // --> cout<<c replaced by cout  (from ***)
    
}