#include <iostream>

using namespace std;

class Complex
{
    float real;
    float imag;
public:
    void setReal(float i)
    {
        real = i;
    };
    void setImag(float i)
    {
        imag = i;
    };
    float getReal()
    {
        return real ;
    };
    float getImag()
    {
        return imag ;
    };
    void print()
    {
        if(imag < 0)
        {
            cout << real << " - " << abs(imag) << "i" << endl;
        }
        else 
        {
            cout << real << " + " << abs(imag) << "i" << endl;
        }
    };
    Complex add(Complex c)
    {
        Complex temp; 
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    } ;
    Complex subtract(Complex c)
    {
        Complex temp; 
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    } ;

};


int main()
{
    Complex c1,c2,c3;
    c1.setReal(7);
    c1.setImag(2);
    c2.setReal(5);
    c2.setImag(5);
    c3 = c1.add(c2);
    c3.print();

    return 0;
}



