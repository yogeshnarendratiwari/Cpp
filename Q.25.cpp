// Pointer to object

// stack --> 
// class_name c;
// class_name *ptr;
// ptr = &c;
// ptr->data;

// Heap -->
// class_name *ptr = new class_name();
// ptr->data;


#include <iostream>
using namespace std;

class Rectangle{
    public :
    int length;
    int breadth;

    public :
    int area(){
        return (length*breadth);
    }
    int perimeter(){
        return (2*(length+breadth));
    } 
};

int main(){

// stack 
Rectangle r;
Rectangle *ptr = &r;
ptr->length = 5;
ptr->breadth = 10;
cout<<ptr->area()<<endl;
cout<<ptr->perimeter()<<endl;

// Heap
Rectangle *ptr = new Rectangle;
ptr->length = 5;
ptr->breadth = 10;
cout<<ptr->area()<<endl;
cout<<ptr->perimeter()<<endl;


}