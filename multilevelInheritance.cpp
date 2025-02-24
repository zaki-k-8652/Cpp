/*
 This program implements the concept of Multilevel Inheritance.
*/
#include <iostream>
using namespace std;

class College
{
protected:
    string name;
    int id;

public:
    College(string name, int id)
    {
        cout << "\n College() constructor called" << endl;
        this->name = name;
        this->id = id;
    }
};

class Subject : public College
{
protected:
    string subjectName;

public:
    Subject(string name, int id, string subjectName) : College(name, id)
    {
        cout << "\n Subject() constructor called" << endl;
        this->subjectName = subjectName;
    }
};

class Student : public Subject
{
protected:
    string studentName;

public:
    Student(string name, int id, string subjectName, string studentName) : Subject(name, id, subjectName)
    {
        cout << "\n Student() constructor called" << endl;
        this->studentName = studentName;
    }

    void display()
    {
        cout << "\n Student Details:" << endl;
        cout << "\n Name: " << studentName << endl;
        cout << "\n ID: " << id << endl;
        cout << "\n College Name: " << name << endl;
        cout << "\n Subject Name: " << subjectName << endl;
    }
};

int main()
{
    Student s("MIT", 2611, "Computer Science", "Zaki Khan");
    s.display();
    return 0;
}