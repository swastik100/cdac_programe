#include <iostream>

using namespace std;

class complex
{
	int real;
	int imag;

public:

void setreal(int b)
{
	real=b;
}
void setimag(int b)
{
	imag=b;
}

int getreal()
{
    return real;
}
int getimag()
{
    return imag;
}

 complex operator+(const complex &b)
{

    complex c4;

    c4.real=real+b.real;

    c4.imag=imag+b.imag;

    return c4;
}

//complex & operator=(const complex &b)
//{
//    complex c5;
//
//    c5.real=b.real;
//    c5.imag=b.imag;
//
//    return c5;
//}


};


istream & operator >>(istream &in,complex &obj)			// istream
{
	int temp1,temp2;

	in>>temp1;

	//cout<<"enter the real one \n";
	obj.setreal(temp1);
    //cout<<"enter the imaginary one \n";
	in>>temp2;
	obj.setimag(temp2);

	return in;

}

ostream &operator <<(ostream &out,complex &obj)
{

    cout<<"\n entered numbers are \n";
    cout<<obj.getreal()<<"+"<<obj.getimag()<<"i";
}

int main()
{
	complex c1,c2,c3;

	cout<<"enter the complex number using spaces \n";
	cin>>c1;
	cout<<c1;
    cout<<"\n enter the second complex number using spaces \n";
	cin>>c2;
	cout<<c2;

	c3=c1+c2;

	//cout<<c1+c2;

	cout<<c3;


	return 0;
}


