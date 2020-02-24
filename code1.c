#include <stdio.h>

void Add(int a,int b)
{
	printf("a+b:%d",a+b);
}

void mul(int a, int b)
{
	printf("a*b:%d",a*b);
}

void max(int a,int b,int c)
{
	int temp=a;
	if(b>temp)
	{
		temp=b;
	}
	else
		if(c>temp)
		{
			temp=c;
		}
		
		printf("max:%d",temp);
}

void min(int a, int b, int c)
{
	int temp=a;
	if(temp>b)
	{
		temp=b;
	}
	else
		if(c<temp)
		{
			temp=c;
		}
		printf("min:%d",temp);
}
int main()
{
	void(*ptn[4])()={Add,mul,max,min};

	printf("enter your choice(1-5)");
	int n;
	scanf("%d",&n);
	*(ptn+(n-1));
	return 0;
}



