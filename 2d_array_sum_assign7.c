#include <iostream>

using namespace std;
void read_matrix(int arr[][100],int a,int b)
{
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{
		cin>>arr[i][j];
	}
}
}
void print_matrix(int arr[][100],int a,int b)
{
	
	for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<"\n";
}
}




void add_matrix(int arr1[][100],int arr2[][100],int a,int b,int n,int m)
{
	int arr3[100][100];
	if(a==n && b==m )
	{
		for(int i=0;i<a;i++)
		{
			for (int j = 0; j <b; ++j)
			{
				arr3[i][j]= arr1[i][j] + arr2[i][j];
			}
		}

	
    cout<<"\nAdd of matrices is :p\n";
	print_matrix(arr3,a,b);
    }
    else
    	cout<<"Not possible :(";
}

int main()
{
int a,b,n,m;
int arr1[100][100];
int arr2[100][100];
cout<<"enter N*M size of 1st matrix";
cin>> a >> b;
//arr[a][b];
//size=sizeof(arr)/sizeof(arr[0]);
read_matrix(arr1,a,b);



cout<<"\nenter N*M size of 2nd matrix\n";
cin>> n >> m;

read_matrix(arr2,n,m);
cout<<"\n1st matrix is:\n";
print_matrix(arr1,a,b);
cout<<"\n2nd matrix is:\n";
print_matrix(arr2,n,m);

add_matrix(arr1,arr2,a,b,n,m);

//arr[a][b];
return 0;
}

