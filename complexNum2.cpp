#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    complex()
    {
        real = imag = 0;
    }

    complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void display()
    {
        if (imag < 0)
            cout << real << imag << "i" << endl;
        else
            cout << real << "+" << imag << "i" << endl;
    }

    friend complex operator+(complex t1, complex t2);
};

complex operator+(complex t1, complex t2)
{
    complex temp;
    temp.real = t1.real + t2.real;
    temp.imag = t1.imag + t2.imag;
    return temp;
}

int main()
{
    complex c1(2, 4), c2(6, 8), c3;
    c3 = c1 + c2;

    cout << "\n Sum of 2 complex numbers using friend function: ";
    c3.display();
    cout << endl;

    return 0;
}