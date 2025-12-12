#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex
{
    public:
        int Real;
        int Img;

        static int counter;

        Complex()
        {
            counter++;
        }

        Complex(int real, int img)
        {
            Real = real;
            Img = img;

            counter++;
        }

        Complex Add(Complex c)
        {
            Complex result;

            result.Real = Real + c.Real;
            result.Img = this->Img + c.Img;

            return result;
        }

        static Complex Add(Complex c1, Complex c2)
        {
            Complex result;

            result.Real = c1.Real + c2.Real;
            result.Img = c1.Img + c2.Img;

            return result;
        }

        void Display()
        {
            cout << Real << "+" << Img;
        }

    protected:

    private:
};

#endif // COMPLEX_H
