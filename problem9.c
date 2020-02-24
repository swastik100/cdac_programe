#include<stdio.h>

//void main()
//{
//    int i, j, a[10] ,l,m;
//
//    printf("enter the number of element");
//    scanf("%d",&i);
//    for(m=0;m<i;m++)
//    {
//    printf("enter the first number");
//    scanf("%d",&a[m]);
//    }
//    int max =a[0];
//    int min=a[0];
//    for(int k=1;k<i;k++)
//}
//    {  int p=a[k];
//        if(p > max)
//            max = p;
//        if(p < max)
//            min = p;
//    }
//    printf("\n \n maximim is :%d \n minimum is :%d",max,min);
//

void main()
{
    int a[20],b[20],c,temp,i,j;

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

    printf("\nsmallest number is %d \n",a[0]);
     printf("largest number is %d\n",a[c-1]);
      printf("2nd smallest number is %d\n",a[1]);
       printf("2nd largest number is %d\n",a[c-2]);

}
