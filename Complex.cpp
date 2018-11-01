#include <iostream>
#include "Complex.h"

const Complex i(0,1);
   Complex::Complex(){
           real=0;
           imag=0;
    }

  Complex::Complex(double x , double y){

            real = x ;
            imag = y ;

    }
     void Complex::setReal (double v){
     real = v;

   }
     void Complex::setImag(double b){
     imag = b;
     }
     double Complex::getReal (double real){

            return real ;
     }

     double Complex::getImag (double imag){
            return imag ;
     }

   std::istream& operator>> (istream&in, Complex& num ){
     cout<<endl<<"Enter the real part then the imaginary one "<<endl;
     in>>num.real >>num.imag;
     return in ;
     }

   std::ostream& operator<< (ostream& out ,Complex& num){


        if (num.imag>0){
       out<< num.real <<" + " << num .imag << " i" ; }
        else if (num.imag<0){
        out<<num.real << " - " <<-1*num.imag << " i" ; }

    return out ;
     }


 Complex  operator+ (Complex num1 , Complex num2 ){

    num1.real += num2.real ;
    num1.imag += num2.imag ;

    return num1 ;
}

Complex  operator- (Complex num1 , Complex num2 ){

    num1.real -= num2.real ;
    num1.imag -= num2.imag ;

    return num1 ;
}
 Complex  operator * (Complex num1 , Complex num2 ){
    Complex mult ;
    mult.real = (num1.real*num2.real)- (num1.imag*num2.imag);
    mult.imag = (num1.real*num2.imag)+ (num1.imag*num2.real);
    return mult ;}

bool operator== (Complex num1 , Complex num2){
    if((num1.real==num2.real)&&(num1.imag=num2.imag))
        return true;
    else return false ;

}

Complex::~Complex()
{
    //dtor
}
