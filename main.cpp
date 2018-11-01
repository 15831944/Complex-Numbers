#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{

Complex num1, num2,add,mult,sub ,numm;

        cout<<"Enter the first complex number " ;
        cin>>num1;

        cout<<"Enter the second complex number ";
        cin>>num2 ;

        cout<<endl<<num1<<endl<<num2<<endl <<endl ;

        add=num1+num2 ;
        sub=num1-num2 ;
        mult=num1*num2 ;
cout <<endl<< num1 <<endl<<"+ " <<endl<< num2 << endl<< "______________"<<endl <<add<<endl<<endl<<endl;
cout <<endl<<num1 <<endl<<"- " <<endl<< num2 << endl<< "______________"<<endl <<sub<<endl<<endl<<endl;
cout <<endl<< num1 <<endl<<"* " <<endl<< num2 << endl<< "______________"<<endl <<mult<<endl<<endl<<endl;
if(num1==num2)
cout<< "The two numbers are equal "<<endl<<endl;
else cout<<"The two numbers are not equal"<<endl<<endl;


    return 0;
}
