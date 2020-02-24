#include<stdio.h>

void main()
{
    int i, j, a[10] ,l,m;

    printf("enter the number of element");
    scanf("%d",&i);
    for(m=0;m<i;m++)
    {
    printf("enter the first number");
    scanf("%d",&a[m]);
    }
    int max=a[0];
    int min=a[0];
    for(int k=1;k<i;k++)
    {  int p=a[k];
        if(p > max)
            max = p;
        if(p < max)
            min = p;
    }
    printf("\n \n maximim is :%d \n minimum is :%d",max,min);
}
