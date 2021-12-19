// class for student
// data members --> roll number , name , marks in physics chemistry and maths
// member functions --> grade , total marks and other methods

#include <iostream>
using namespace std;

class Student
{
private:
    int roll_number;
    int physics_marks;
    int maths_marks;
    int chemistry_marks;
    string name;

public:
    double Total_Marks();
    string Grade();
    int get_roll_number();
    int get_physics_marks();
    int get_chemistry_marks();
    int get_maths_marks();
    string get_name();

private:
    void set_roll_number(int roll_number);
    void set_physics_marks(int physics_marks);
    void set_chemistry_marks(int chemistry_marks);
    void set_maths_marks(int maths_marks);
    void set_name(string name);

public:
    Student(int roll_number, int physics_marks, int chemistry_marks, int maths_marks, string name)
    {
        set_roll_number(roll_number);
        set_physics_marks(physics_marks);
        set_chemistry_marks(chemistry_marks);
        set_maths_marks(maths_marks);
        set_name(name);
    }
};
void Student ::set_roll_number(int roll_number)
{
    if (roll_number > 0)
        this->roll_number = roll_number;
    else
        cout << "Roll number error" << endl;
}
int Student ::get_roll_number()
{
    return roll_number;
}
void Student ::set_physics_marks(int physics_marks)
{
    if (physics_marks >= 0 && physics_marks <= 100)
        this->physics_marks = physics_marks;
    else
        cout << "Marks error" << endl;
}
int Student ::get_physics_marks()
{
    return physics_marks;
}
void Student ::set_chemistry_marks(int chemistry_marks)
{
    if (chemistry_marks >= 0 && chemistry_marks <= 100)
        this->chemistry_marks = chemistry_marks;
    else
        cout << "Marks error" << endl;
}
int Student ::get_chemistry_marks()
{
    return chemistry_marks;
}
void Student ::set_maths_marks(int maths_marks)
{
    if (maths_marks >= 0 && maths_marks <= 100)
        this->maths_marks = maths_marks;
    else
        cout << "Marks error" << endl;
}
int Student ::get_maths_marks()
{
    return maths_marks;
}
void Student ::set_name(string name)
{
    this->name = name;
}
string Student ::get_name()
{
    return name;
}

double Student ::Total_Marks()
{
    return (physics_marks + chemistry_marks + maths_marks);
}

string Student ::Grade()
{

    float average = Total_Marks() / 300.0f;
    float percentage = average * 100;
    if (percentage >= 70)
        return "A";
    else if (percentage <= 70 && percentage >= 60)
        return "B";
    else if (percentage <= 60 && percentage >= 50)
        return "C";
    else if (percentage <= 50 && percentage >= 40)
        return "D";
    else
        return "E";
}

int main()
{
    Student Yogesh(36, 95, 94, 99, "Yogesh");
    cout<<Yogesh.Total_Marks()<<endl;
    cout << "Your grade is : "<< Yogesh.Grade()<<endl;
}