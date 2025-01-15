// Overload && operator to compare 2 complex numbers such that both real and imaginary parts are compared.
#include <iostream>
using namespace std;
class cmplxCompare
{
    int real, imag;

public:
    cmplxCompare()
    {
        real = imag = 0;
    }
    cmplxCompare(int real, int imag)
    {
        this->imag = imag;
        this->real = real;
    }
    bool operator&&(cmplxCompare &T)
    {
        return this->real == T.real && this->imag == T.imag;
    }
};

int main()
{
    cmplxCompare c1(2, 2), c2(2, 2), c3;
    if (c1 && c2)
        cout << "\n Complex numbers are similar" << endl;
    else
        cout << "\n Complex numbers are not similar" << endl;

    return 0;
}