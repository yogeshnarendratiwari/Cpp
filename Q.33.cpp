// Question on inheritance
#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;

public:
    Employee(int id, string name)
    {
        set_name(name);
        set_id(id);
    }
    string get_name();
    int get_id();
private:
    void set_name(string name);
    void set_id(int id);

    
    
};

void Employee ::set_name(string name)
{
    this->name = name;
}
string Employee ::get_name()
{
    return name;
}
int Employee ::get_id()
{
    return id;
}
void Employee ::set_id(int id)
{
    if (id > 0)
    {
        this->id = id;
    }
    else
    {
        id = 0;
        cout << "Id must be positive" << endl;
    }
}

class Part_time_Employee : public Employee
{
private:
    int wage;

public:
    Part_time_Employee(int wage, int id, string name) : Employee(id, name)
    {
        set_wage(wage);
    }

private:
    void set_wage(int wage);
public :    
    int get_wage();
};
void Part_time_Employee ::set_wage(int wage)
{
    if (wage > 0)
        this->wage = wage;
    else
        wage = 0;
}
int Part_time_Employee :: get_wage(){
    return wage;
}

class Full_time_Employee : public Employee
{
private:
    int salary;

public:
    Full_time_Employee(int salary, int id, string name) : Employee(id, name)
    {
        set_salary(salary);
    }

private:
    void set_salary(int salary);
public :    
    int get_salary();
};
void Full_time_Employee ::set_salary(int salary)
{
    if (salary > 0)
        this->salary = salary;
    else
        salary = 0;
}
int Full_time_Employee :: get_salary(){
    return salary;
}

int main()
{

    Part_time_Employee pt(1000,12,"Ramesh");
    cout<<"The id is : "<<pt.get_id()<<endl;
    cout<<"The name of employee is : "<<pt.get_name()<<endl;
    cout<<"The wages of employee is : "<<pt.get_wage()<<endl;
  
    Full_time_Employee ft(9000,11,"Suresh");
    cout<<"The id is : "<<ft.get_id()<<endl;
    cout<<"The name of employee is : "<<ft.get_name()<<endl;
    cout<<"The wages of employee is : "<<ft.get_salary()<<endl;
}