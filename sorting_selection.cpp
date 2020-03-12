#include<iostream>
using namespace std;

int main()
{
	int a[100],n;
	cout<<"Enter no. of elements :\n";
	cin>>n;

	cout<<"\nEnter elements :\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cout<<"Unsorted array is :\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<"\t";
	}
	//int min=a[0];
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j <n ; ++j)
		{
			if (a[i]>a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	cout<<"Sorted array is :\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}