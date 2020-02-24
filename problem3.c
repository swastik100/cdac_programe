#include <stdio.h>

void main()
{   int  j,k,a;
	printf("enter the number of rows");
	scanf("%d",&a);
	for (int i = 1; i <=a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("1" );
		}
		printf("\n" );
	}
	//---------------------------------------------
		for (int i = 1; i <=a; i++)
	{
		for (int j = a; j >= i; j--)
		{
			printf("1" );
		}
		printf("\n" );
	}
}