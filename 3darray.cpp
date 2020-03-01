#include <iostream>
#include <stdlib.h>

using namespace std;
int read_matrix( int (***arr),int a,int b,int c)
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
void print_matrix(int (***arr),int a,int b,int c)
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




void add_matrix(int (***arr),int a,int b,int c)
{
	//int ***arr3={0};
	for(int k=0;k<a-1;k++)
	{
		for(int i=0;i<b;i++)
		{
			for (int j = 0; j <c; ++j)
			{
				arr[0][i][j]= arr[0][i][j] + arr[k][i][j] ;
			}
		}


    
    }
    cout<<"\n Add of matrices is :p\n";
    int p=1;
	print_matrix(arr,p,b,c);
    
}

int main()
{

int ***arr1;
					// int arr1[100][100][100];
int a;
int b;
int c;

cout<<"enter size of 1st matrix";
cin>> a>>b>>c;

//int a;

arr1=(int***)malloc(a*sizeof(int**));


cout<<"enter 2nd one\n";
for (int i = 0; i < a; ++i)
{   
	//cout<<"enter 2nd one\n";
	//cin>>b;



arr1[i]=(int**)malloc(b*sizeof(int*));

{
	for (int j = 0; j < b; ++j)
	{
		
		//cout<<"enter 3nd one";
		//cin>>c;

		arr1[i][j]=(int*)malloc(c*sizeof(int));
	}
}

}



read_matrix(arr1,a,b,c);

print_matrix(arr1,a,b,c);

add_matrix(arr1,a,b,c);

for (int i = 0; i < a; ++i)
{

	for (int j = 0; i < b; ++j)
	{
		free(arr1[i][j]);
	}

 free(arr1[i]);

}
free (arr1);


return 0;
}

