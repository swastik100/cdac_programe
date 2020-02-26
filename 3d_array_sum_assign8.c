#include <iostream>

using namespace std;
void read_matrix(int arr[][100][100],int a,int b,int c)
{
	cout<<"\nEnter ele :\n";
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{

	for(int k=0;k<c;k++)
	{
		cin>>arr[i][j][k];
	}
	}
}
}
void print_matrix(int arr[][100][100],int a,int b,int c)
{
	
	for(int i=0;i<a;i++)
{	cout<<i+1<<"th matrix is :\n";
	for(int j=0;j<b;j++)
	{
		for(int k=0;k<c;k++)
		{
		cout<<arr[i][j][k]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n\n\n";
	
}
}




void add_matrix(int arr1[][100][100],int a,int b,int c)
{
	int arr3[100][100][100]={0};
	for(int k=0;k<a;k++)
	{
		for(int i=0;i<b;i++)
		{
			for (int j = 0; j <c; ++j)
			{
				arr3[0][i][j]= arr3[0][i][j] + arr1[k][i][j] ;
			}
		}

	
    
    }
    cout<<"\n Add of matrices is :p\n";
    int p=1;
	print_matrix(arr3,p,b,c);
    
}

int main()
{
int a,b,c;
int arr1[100][100][100];
//int arr2[100][100][100];
cout<<"enter N*M*P size of 1st matrix";
cin>> a >> b >>c;
//arr[a][b];
//size=sizeof(arr)/sizeof(arr[0]);
read_matrix(arr1,a,b,c);

print_matrix(arr1,a,b,c);

add_matrix(arr1,a,b,c);

/*cout<<"\nenter N*M size of 2nd matrix\n";
cin>> n >> m;

read_matrix(arr2,n,m);
cout<<"\n1st matrix is:\n";
print_matrix(arr1,a,b);
cout<<"\n2nd matrix is:\n";
print_matrix(arr2,n,m);

add_matrix(arr1,arr2,a,b,n,m);

//arr[a][b];*/
return 0;
}

