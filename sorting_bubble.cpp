#include<iostream>
using namespace std;

void swap(int *ar,int *ap)
{
	int t;
	t=*ar;
	*ar=*ap;
	*ap=t;
}

void bubble_sort(int arr[],int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

void print(int ar[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<ar[i]<<"\t";
	}
}

int main()
{
	int a[100],n;
	cout<<"Enter the total no.s :\n";
	cin>>n;
	
	cout<<"Enter no.s :\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cout<<"Array before sorting is :\n";
	print(a,n);

	bubble_sort(a,n);

	cout<<"\nArray after sorting is :\n";
	print(a,n);

	return 0;
}