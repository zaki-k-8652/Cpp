#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    Complex operator*(Complex obj)
    {
        Complex t;
        t.real = (this->real * obj.real) - (this->imag * obj.imag);
        t.imag = (this->real * obj.imag) + (obj.real * this->imag);
        return t;
    }
    void display()
    {
        if (imag < 0)
        {
            cout << real << imag << "i";
        }
        else
        {
            cout << real << "+" << imag << "i";
        }
    }
};

int main()
{
    Complex c1(4, 5), c2(4, -5), c3;
    c3 = c1 * c2;

    cout << "\n Multiplication of 2 complex numbers: ";
    c3.display();
    cout << endl;

    return 0;
}