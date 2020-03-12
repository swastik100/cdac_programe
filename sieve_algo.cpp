/*
Find prime no. btw 2 and n using Sieves algo
*/

#include<iostream>
using namespace std;

int main()
{
	int n,a[100];
	cout<<"\nEnter limit :\n";
	cin>>n;
	
	for(int i=2 ; i<=n ; i++)
	{
		a[i]=i;
	}

	for (int i = 2; i <= n; ++i)
	{
		for (int j = i+1; j <= n; ++j)
		{
			if (a[j]%i==0)
			{
				a[j]=0;
			}
		}
	}

	cout<<"\nPrime no.s are :\n";
	
	for (int i = 2; i <= n; ++i)
	{
		//if (a[i]!=0)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}