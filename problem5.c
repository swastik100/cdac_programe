#include<stdio.h>
void main()
{

	int i,j,k,n;
	printf("enter the number of rows");
	scanf("%d",&n);

	for (int i = 1; i <= n; ++i)
	{
		for (int j = n; j >= i; --j)     //////// for spaces 
		{   
			printf("-");
		}

			for (k = 1; k <= (i*2)-1; ++k)   /////// for star print
			{
				printf("1");
			}

			printf("\n");

	
	}
	int p,q,r;
	for ( p = 1; p < n+1; ++p)
	{
		for ( q = 0; q <= p; ++q)
		{
			printf("-");
		}
		for (r = k-3 ; r >= 1; r--)
		{
			printf("1");

		}


		printf("\n");
		k=k-2;
	}
	
}