/* Create a program to check the difference between two circles */
#include <iostream>
using namespace std;
#define PI 3.1414
class Circle
{
    double a, r;

public:
    Circle()
    {
        a = r = 0;
    }
    Circle(double r)
    {
        this->r = r;
        this->a = PI * r * r;
    }
    Circle operator-(Circle C)
    {
        Circle diff;
        diff.a = this->a - C.a;
        return diff;
    }
    void display()
    {
        cout << "\n Difference in Area: " << a << endl;
    }
};
int main()
{
    Circle C1(15), C2(10), C3;
    C3 = C1 - C2;
    C3.display();

    return 0;
}
