/*#include <stdio.h>

void main()
{   int  j,k,a;
	printf("enter the number of rows");
	scanf("%d",&a);
	for (int i = a; i <=1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" " );
		}
		for (int k = a; k > i; k--)
		{
			printf("1");
		}
		printf("\n" );
	}
	//---------------------------------------------
	/*	for (int i = 1; i <=a; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			printf("1" );
		}
		printf("\n" );
}	}*/

#include <stdio.h>
void main()
{        int a;
	int num,spaces;
	     printf("enter the number of rows");
		 scanf("%d",&a);
		 num=1;
		 spaces=a-1;

		for (int i = 1; i <a*2; i++)
	{
		for (int j = 1; j<=spaces; j++)
		{
			printf(" " );
		}
		for (int j= 1; j <=num; j++)
		{
			/* code */printf("*");
		}

		printf("\n" );
		if (i<a)
		{
			num++;
			spaces--;
		}
		else
		{
			num--;
			spaces++;/* code */
		}
	}
 }

