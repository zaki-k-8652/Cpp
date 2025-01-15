// Overload || operator to compare 2 complex numbers such that both real and imaginary parts are compared.
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
    bool operator||(cmplxCompare &T)
    {
        return this->real == T.real || this->imag == T.imag;
    }
};

int main()
{
    cmplxCompare c1(1, 2), c2(3, 4), c3;
    if (c1 || c2)
        cout << "\n Atleast one part or both parts of complex numbers are similar....." << endl;
    else
        cout << "\n Complex numbers are not similar in any way....." << endl;

    return 0;
}