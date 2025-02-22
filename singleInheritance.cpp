/**/
#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;

public:
    Employee(int id, string name)
    {
        cout << "\n Base class constructor called" << endl;
        this->id = id;
        this->name = name;
    }
};

class HR : public Employee
{
    double salary;

public:
    HR(int id, string name, double salary) : Employee(id, name)
    {
        cout << "\n Derived class constructor called" << endl;
        this->salary = salary;
    }
    void display()
    {
        cout << "\n ID: " << id << "\n Name: " << name << "\n Salary: " << salary << endl;
    }
};
int main()
{
    HR e1(123, "Zaki Khan", 70000);
    e1.display();
    return 0;
}