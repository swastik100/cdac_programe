#include<iostream>
using namespace std;

const int ArraySize = 100;
//const int ArrayToStop -1;

int GetFromUser()
{
	int n;
	do
	{
		cout<<"Enter total no. of ele in array :\n";
		cin>>n;
	}while(n>100);

	return n;
}

void InputArray(int arr[], int n)
{
	cout<<"Enter array :\n";
	for(int i=0 ; i<n ; i++)
		cin>>arr[i];
}

void PrintArray(int aa[],int n)
{
	cout<<"The array is :\n";
	for(int i=0 ; i<n ; i++)
	{
		cout<<aa[i]<<"\t";
	}
}

int FindNum(int arr[], int size)
{
	int num,k=0;
	cout<<"\nEnter number to find :";
	cin>>num;

	for(int i=0 ; i<size ; i++)
	{
		if(arr[i]==num)
		{
			k=1;
			break;
		}
	}
	if(k==1)
		cout<<"Number found";
	else
		cout<<"Number not found !";
}

void ExitFun()
{
	exit(1);
}

int main()
{
	int num[ArraySize],m;
	int k;
	
    do
    {
	cout<<"\nEnter your choice :\n1. Find a number\n2. Exit";
	cin>>m;

	switch(m)
	{
		case 1:
		{
			int n=GetFromUser();
			InputArray(num,n);
			PrintArray(num,n);
			FindNum(num,n);
			break;
		}
		case 2:
		{
			ExitFun();
			break;
		}

		default:
		{
			cout<<"Invalid choice !!";
			break;
		}
	}
	cout<<"\nPress 1 to Continue or any other number key to exit";
	cin>>k;
	}while(k==1);
return 0;
}