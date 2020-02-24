#include<stdio.h>

int main()
{
	int i,j,sum=0;
	printf("enter the number u want sum\n");
	scanf("%d",&i);

	while(i>0)
	{
		j=i%10;
			sum=sum+j;

		i=i/10;
	
	}
	printf("%d\n",sum );
	return 0;
}