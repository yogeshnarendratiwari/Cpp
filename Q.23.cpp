// Inheritance

// Syntax :

// class subclass_name : public/private superclass_name{
//     // body of subclass
// };

#include <iostream>
using namespace std;

// // class Papa{
// //     public :
// //     void maths();
// //     void speak();
// //     void eyes();
// //     void public_speaking();
// // };

// // class Son : public Papa{ // --> Public , Protected , private
// //     public :
// //     void sports();
// //     void personality();

// // };

// class A{

//     public :
//     int x=4;
//     protected :
//     int y=3;
//     private :
//     int z=9;
// };

// class B : public A{
//     void methodB1(){
//         cout<<x<<endl;
//     }
//     void methodB2(){
//         cout<<y<<endl;
//     }
//     // void methodB3(){
//     //     cout<<z<<endl;
//     // }

// };
// class C : protected A{
//     void methodC1(){
//         cout<<x<<endl;
//     }
//     void methodC2(){
//         cout<<y<<endl;
//     }
//     // void methodC3(){
//     //     cout<<z<<endl;
//     // }

// };
// class D : private A{
//     void methodD1(){
//         cout<<x<<endl;
//     }
//     void methodD2(){
//         cout<<y<<endl;
//     }
//     // void methodD3(){
//     //     cout<<z<<endl;
//     // }

// };

// Types of Inheritance
// 1.Single inheritance
// One sub class is inherited from one super class only

//2.Multiple inheritancxe
// one sub class is inherited from more than one super classes
// class Vehicle{
//     public :
//     void vehicle(){
//          cout<<"This is a vehicle"<<endl;
//     }
// };
// class FourWheeler{
//     public :
//     void fourWheeler(){
//         cout<<"This is a 4 Wheeler vehicle"<<endl;
//     }
// };

// class car : public Vehicle,public FourWheeler{

// };
// int main(){
//     car c;
//     c.fourWheeler();
//     return 0;
// }

// 3.Multilevel inheritance

// C -->base class
// B: C -->derived class
// D : B-->derived class is created from derived class

// class Vehicle
// {
// public:
//     void vehicle()
//     {
//         cout << "This is a vehicle" << endl;
//     }
// };
// class FourWheeler : public Vehicle
// {
// public:
//     void fourWheeler()
//     {
//         cout << "This is a 4 Wheeler vehicle" << endl;
//     }
// };

// class car : public FourWheeler
// {
// public:
//     void Car()
//     {
//         cout << "Car has 4 wheels" << endl;
//     }
// };
// int main()
// {
//     car c;
//     c.vehicle();
//     c.fourWheeler();
//     c.Car();
//     cout << "--------------" << endl;
//     FourWheeler f;
//     f.fourWheeler();
//     f.vehicle();
//     return 0;
// }

//.4.Hierarchical inheritance
// A -->Base class

// B-->A && C-->A
// D-->B && E-->B + F-->C && G-->C

// class Vehicle
// {
// public:
//     void vehicle()
//     {
//         cout << "This is a vehicle" << endl;
//     }
// };

// class car : public Vehicle{

// };

// class Bus : public Vehicle{

// };

// class Maruti : public car{

// };

// class Nexon : public car{

// }

// class Govt_Bus : public Bus{

// }

// class Private_Bus : public Bus{

// }

