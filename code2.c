#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,max=0,min=0;
	scanf("%d",&n);
	int *p=(int*)( malloc(n*sizeof(int)));
	for(i=0;i<n;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
		}
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)<min)
		{
			min=*(p+i);
		}
	}
	printf("min:%d",min);
	printf("max:%d",max);
	return 0;
}
