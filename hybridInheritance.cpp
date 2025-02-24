/*
 This program implements the concept of Hybrid Inheritance.
*/
#include <iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    A()
    {
        x = 10;
    }
};

class B1 : public virtual A
{
protected:
    int b1;
    B1()
    {
        b1 = 10;
    }
};

class B2 : public virtual A
{
protected:
    int b2;
    B2()
    {
        b2 = 20;
    }
};

class C : public B1, public B2
{
protected:
    int c;

public:
    C()
    {
        c = 67;
    }

    void display()
    {
        cout << "\n x in A: " << x << endl;
        cout << "\n b1 in B1: " << b1 << endl;
        cout << "\n b2 in B2: " << b2 << endl;
        cout << "\n c in C: " << c << endl;
    }
};

int main()
{
    C obj;
    obj.display();
    return 0;
}