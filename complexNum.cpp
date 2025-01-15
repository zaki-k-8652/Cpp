// Write a C++ program to add to display and then 2 complex numbers using operator overloading
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
    Complex operator+(Complex const &obj)
    {
        Complex R;
        R.real = real + obj.real;
        R.imag = imag + obj.imag;
        return R;
    }
};

int main()
{
    Complex num1(-1, -2), num2(-3, -4);
    Complex num3(2, 2), num4(3, 6);
    Complex sum1, sum2;

    sum1 = num1 + num2;
    sum2 = num3 + num4;

    cout << "\n The sum of 2 negative complex numbers: ";
    sum1.display();
    cout << endl;

    cout << "\n The sum of 2 positive complex numbers: ";
    sum2.display();
    cout << endl;

    return 0;
}