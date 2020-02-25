#include<iostream>
using namespace std;
class Complex
{
     float real;
    float imag;
public :
    void read()
    {  // float a,b;
        cin>>real>>imag;
    }

    void print()
    {   if(imag<0)
        cout<< real << imag<<"i";
        else
         cout<< real <<"+"<< imag<<"i";    
    }

    Complex Add(const Complex &b )
    {
        Complex c4;
        c4.real=real + b.real;
        c4.imag=imag + b.imag;
        return c4;
    }
        Complex Sub(const Complex &b )
    {
        Complex c4;
        c4.real=real - b.real;
        c4.imag=imag - b.imag;
        return c4;
    }
        Complex Comp(const Complex &b )
    {
        Complex c4;
        if(real == b.real && imag == b.imag)
            cout<<" \n both number are same \n";
        else
            cout<<"\n both numbers are diffrent \n";

    }

    Complex(float r , float i): real(r),imag(i)
    {
        cout<<" \n parametrize constructor";
    }

    Complex()
    {
      // cout<<"\n  default constructor";
    }
//    Complex(float r , float i): real(0),imag(0)
//    {
//        cout<<" zero constructor";
//    }
//    ~Complex()
//    {
//        cout<<"destructor";
//    }

};
int main()
{
    Complex c1,c2;
    cout<< "enter the complex number \n";
    cout<<"enter the first complex number using spaces \n";
    c1.read();
    cout<<"enter the second complex number \n";
    c2.read();

    cout<<" addition is : \n";

    Complex c3 = c1.Add(c2);
    c3.print();
    Complex c5 = c1.Sub(c2);
    cout<<"\n Substraction is \n";
    c5.print();
    Complex c6 = c1.Comp(c2);


return 0;
}
