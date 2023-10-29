/*Define class Complex with real and imaginary as data members, define default and
parameterized constructor to initialize two complex numbers. Define add (Complex,
Complex) member function to add two complex numbers and show( ) function to display
both the complex numbers with their addition. */
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Complex
{
private:
    float real,i;
public:
    Complex()
    {
        real=1;
        i=2;
    }
    Complex(float x,float y)
    {
        real=x;
        i=y;
    }
    void display()
    {
        cout<<"Complex number="<<real<<"+"<<i<<"i"<<endl;
    }
    void add(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        i=c1.i+c2.i;
    }
    void putdata()
    {
        cout<<"Addition of the complex numbers="<<real<<"+"<<i<<"i"<<endl;
    }
};
int main()
{
    Complex
    c1,c2(5,7),c3;
    c1.display();
    c2.display();
    c3.add(c1,c2);
    c3.putdata();
}
