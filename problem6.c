#include<stdio.h>
void main()
{

	int i,j,k,l,n,num=1;
	printf("enter the number of rows");
	scanf("%d",&n);

	for (int i = 0; i <= n; ++i)
	{
		for (int j = n; j >= i; --j)       //////// for spaces 
		{   
			printf("-");
		}

    
        //print first half  1234
            for(k=0;k<=i;k++)
            {
            printf("%d",(k+1));
            }
        //print the second half 321
            for(l=i;l>0;l--)
            {
            printf("%d",l);
            }
        //next line
            printf("\n");
	}		   

	}
	