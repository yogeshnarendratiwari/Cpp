// operator overloading question

#include <iostream>
using namespace std;

class Rational{
    private :
    int p;
    int q;

    public :
    friend istream & operator>> (istream &i,Rational &r);
    friend ostream & operator<< (ostream &o,Rational &r);
    friend Rational operator+ (Rational r1,Rational r2);
};

istream & operator>> (istream &i,Rational &r){
    i>> r.p>>  r.q;
    return i;
}

Rational operator+ (Rational r1,Rational r2){
Rational temp;
temp.p  = r1.p*r2.q+r1.q*r2.p;
temp.q = r1.q*r2.q;
return temp;
}

ostream & operator<< (ostream &o,Rational &r){
    o<<r.p<<"/"<<r.q;
    return o;
}



int main(){
Rational r1,r2,r;
cin>>r1>>r2;
r = r1+r2;
cout<<r<<endl;

}