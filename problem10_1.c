#include<stdio.h>

maxoccur(int arr[],int size)
{  int counter=0;
   int max=0;
   int index=0;
   int c=size;

       for(int i=0;i<c;i++)
    {   int counter=0;
        for(int j=0;j<c;j++)
        {
        if(arr[i]==arr[j])
        {
            counter++;
        }
        if(counter>max)
        {
            max= counter;
            index=i;
        }
        }
        return arr[index];
    }
}


void main()
{
    int a[20],b[20],c,temp,i,j,count=0;

    printf("enter the number of elements");
    scanf("%d",&c);

    printf("enter the elements ");
    for(int i=0;i<c;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i]<=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf(" sorted array is");
    for(int i=0;i<c;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("maximum ocurrance is %d",maxoccur(a,c));


}
