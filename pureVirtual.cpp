/*
 This program implements Pure Virtual functions.
*/
#include <iostream>
using namespace std;

class New
{
protected:
    virtual void display() = 0;
};

class New1 : public New
{
public:
    void display()
    {
        cout << "\n This is a overriden version of display() in derived class" << endl;
    }
};

int main()
{
    New1 obj;
    obj.display();
    return 0;
}