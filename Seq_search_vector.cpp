/*
 Writing program to search an item through sequential search technique. 
 Use std::vector to accept numbers from user.
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,a;
	vector<int>g;
	
	cout<<"\nEnter total ele. :\n";
	cin>>n;

	cout<<"\nEnter elements :\n";
	for (auto i = 1; i <= n; ++i)
	{
		cin>>a;
		g.push_back(a);
	}

	/*for (vector<int>::iterator it = g.begin(); it!=g.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";*/

	cout<<"\nArray before sorting is :\n";
	for (auto i = g.begin(); i != g.end(); ++i)
	{
		cout<<*i<<" ";
	}

	cout<<"\nEnter element to search :\n";
	int k;
	cin>>k;
	int c=0;
	for (auto i = g.begin(); i <= g.end(); ++i)
	{
		if(*i == k)
		{
			cout<<"\nElement found\n";
			c++;
			break;
		}
	}
	
	if(c == 0)
		cout<<"\nNot found :(";
	return 0;
}