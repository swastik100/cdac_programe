#include <iostream>

using namespace std;

int main()
{	char i='a', j='b';
	cout<<"character before \ni is = "<<i<<" j is = "<<j<<"\n";
	swap(i, j);
	cout<<"character after \ni is = "<<i<<" j is = "<<j<<"\n";
	int a=10, b=20;
	cout<<"integer before \ni is = "<<a<<" j is = "<<b<<"\n";
	swap(a, b);
	cout<<"integer after \ni is = "<<a<<" j is = "<<b<<"\n";
	return 0;
}

template<class t>  // here t is not of definite type it can be int or char 
				   // here class t is not class that one of object.
void swap(t &a, t &b) // here t can be of any type can be int or can be of char
{
	t temp;
	temp=a;
	a=b;
	b=temp;
}