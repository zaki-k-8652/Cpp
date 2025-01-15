/*
Write a C++ program to overload unary operator ++ and -- in prefix form.
*/
#include <iostream>
using namespace std;

class UnaryOP
{
    int x;
    float y;
    char z;

public:
    UnaryOP()
    {
        x = y = 0;
        z = '_';
    }
    UnaryOP(int x, float y, char z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    UnaryOP operator++(int plusDummy)
    {
        UnaryOP obj;
        obj.x = this->x;
        obj.y = this->y;
        obj.z = this->z;

        this->x++;
        this->y++;
        this->z++;
        return obj;
    }
    UnaryOP operator--(int minusDummy)
    {
        UnaryOP obj;
        obj.x = this->x;
        obj.y = this->y;
        obj.z = this->z;

        this->x--;
        this->y--;
        this->z--;
        return obj;
    }
    void display()
    {
        cout << "\n Integer: " << x << "\n Float: " << y << "\n Character: " << z << endl;
    }
};
int main()
{
    UnaryOP A(10, 20.5, 'Z'), B, C(10, 20.5, 'Z'), D;
    B = A++;
    A.display();
    B.display();
    D = C--;
    C.display();
    D.display();

    return 0;
}