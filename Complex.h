#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std ;
class Complex
{
public:
        Complex();
        double real , imag ;
    Complex(double x , double y);
     void setReal (double v);
     void setImag(double b);
     double getReal (double );

     double getImag (double);
     friend istream& operator>> (istream&in, Complex& num );

     friend ostream& operator<< (ostream& out ,Complex& num);

friend Complex operator+ (Complex num1 , Complex num2 );
friend Complex operator- (Complex num1 , Complex num2 );
friend Complex operator * (Complex num1 , Complex num2 );

friend bool operator== (Complex num1 , Complex num2);
        ~Complex();


};

#endif // COMPLEX_H
