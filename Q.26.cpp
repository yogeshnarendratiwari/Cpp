// Mutators and Accessors 

// getX(){return X;} -->Accessors
// setX(int x){X=x;} --> Mutators

#include <iostream>
using namespace std;

class Rectangle{
// private :
int length;
int breadth;

public :

void setLength(int l){
    if(l<0)
    length=0;
    else
    length=l;
}
void setBreadth(int b){
    if(b<0)
    breadth=0;
    else
    breadth=b;
}
int getLength(){
    return length;
}
int getBreadth(){
    return breadth;
}
int area(){
    return length*breadth;
}
int Perimeter(){
    return 2*(length+breadth);
}
};
int main(){
Rectangle r;
// r.length = 5 ; -->can't be access because it is not public
r.setLength(5);
r.setBreadth(10);
cout<<r.area()<<endl;
cout<<"The length is "<<r.getLength()<<endl;

 r.setLength(-5); // --> Invalid length as length should be positive
r.setBreadth(10);
cout<<r.area()<<endl;
}