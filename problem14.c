#include<stdio.h>

void main()
{
    int a[10],b,c,n;

    printf("enter the number of elements to rotate");
    scanf("%d",&n);
    printf("enter the step number to rotate to right");
    scanf("%d",&c);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the elements");
    for(int i=(n-c);i<n;i++)  //// for the step numbers to rotate
    {
        printf(" %d ",a[i]);
    }
    for(int i=0;i<(n-c);i++)  //// for the next counter step
    {
        printf(" %d ",a[i]);
    }

}
