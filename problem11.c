#include<stdio.h>
void main()
{

    int a,b,c,res=0;

    printf("print the number to reverse");
    scanf("%d",&a);
    while(a!=0)
    {
        c=a%10;   ////158 8
        a=a/10;
        res=res*10+c;

    }
    printf(" \n reverse is %d",res);

}
