#include <iostream>
#include<string.h>
using namespace std;

class word
{
	private:	
	char* str;
	int size;
	
public:
	void getlength(const char strw[6])
	{
		size=6;
		allocate();
	}
	void setsize(int n)
	{
		size=n;
		allocate();
	}
	void allocate()
	{
		str= new char[size];
	}
	void operator =(const char (&strx)[100])
	{
		strcpy(str,strx);
		
	}

	void operator =(const word &b)
	{
		size = strlen(b.str);
		str= new char[size]; 
		strcpy(str,b.str);
		
	}

	word operator =(const char strw[6])
	{
		getlength(strw);
		strcpy(str,strw);
		return *this;

	}
	word operator +(const word &b )
	{
		word x;
		x.str  = strcat(str,b.str);
		return x;
	}

	word operator +(const char (&strx)[6] )
	{
		word x;
		x.str  = strcat(str,strx);
		return x;
	}

	void print()
	{
		cout<<str;
	}
	char operator [](int n)
	{
		if(n>=0 && n<size)
		return str[n];
		else 
		{
			cout<<"invalid index";
			return '\0';
		}
	}
};
istream& operator >>(istream &in,word &a)
{
	char str[100];
	in>>str;
	int n= strlen(str);
	a.setsize(n);
	a=str;

}
ostream& operator <<(ostream &out,word &a)
{
	a.print();


}


int main()
{
	word obj1;
	cin>>obj1;
	obj1.print();
	word obj2;
	obj2="hello";
	word x;
	x=obj1+obj2;
	word y;
	y=obj1+"hello";
	x.print();
	cout<<endl;
	y.print();
	cout<<endl;
	word vv;
	obj1="shubham";
	vv=obj1;
	vv.print();
	cout<<endl<<vv;
	cout<<vv[0];
	
}