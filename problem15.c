//#include<stdio.h>
//#include<string.h>
//
//void main()
//{
//    int a[10],b,c[10],n,i,j;
//    char p[10];
//    printf("enter the number to check pallindrome");
//
//    scanf("%d",&n);
//
//    int l=n;
//
//    itoa(l,p,10);
//
//    b=strlen(p);
//
//    printf("string lenght is %d \n",b);
//
//    while(n!=0)
//    {
//        for(int i=0;i<b;i++)
//        {
//           a[i]=n%10;
//           n=n/10;
//        }
//
//
//    }
//    for(int i=0;i<b;i++)
//        {
//           printf("%d",a[i]);
//        }
//        int temp1=a;
//
//        printf("\n");
//     for(int j=b-1;j>=0;j--)
//     {
//         printf("%d",a[j]);
//     }
//    int temp2 = a;
//
//    if(temp1==temp2)
//    {
//        printf("\n its palindrome");
//    }
//    else
//        printf("its not palindrome");
//
//}

#include<stdio.h>
void main()
{
    int a,b,sum=0;
    printf("enter the number to check pallindrome");
    scanf("%d",&a);
    int temp =a;
    while(a!=0)
    {
        b=a%10;
        sum=(sum*10)+b;
        a=a/10;
    }
    if(temp==sum)

        printf(" %d is palindrome ",temp);

        else
            printf("its not palindrome");



}
















