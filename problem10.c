#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j,k,a[50],b[50],count,max_count=1;
    printf("Enter no. of integer:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    //printing array
    for(i=0;i<n;i++)
    {

        printf("%d   ",a[i]);
    }
    //finding frequency and print
     for(i=0;i<n;i++)
     {
         count=1;
         for(j=i+1;j<n;j++)
         {
              if (a[i]==a[j])
              {
                  count++;
                  b[j]=0;
              }
         }
         if (b[i]!=0)
         {
             b[i]=count;
         }
    if (b[i]>max_count)
      {
         max_count=b[i];
        printf("\n max count nnumber:%d   ",a[i]);
      }
    }

     for(i=0;i<n;i++)
    {

        if(b[i]!=0)
        {
            printf("\n num:%d = count: %d  ",a[i], b[i]);
        }
    }
//     if(b[i]>=count-1)
//     {
//        printf("\nhigh frequency value is %d",a[i]);
//     }

}
