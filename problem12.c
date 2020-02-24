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
    printf(" \n reverse is %d \n",res);

    while(res!=0)
    {
        switch(res%10)
        {
        case 0:
            printf("ZERO \n");
            break;
        case 1:
            printf("ONE \n");
            break;
        case 2:
            printf("TWO \n");
            break;
        case 3:
            printf("THREE \n");
            break;

        case 4:
            printf("FOUR \n");
            break;
        case 5:
            printf("FIVE \n");
            break;
        case 6:
            printf("SIX \n");
            break;
        case 7:
            printf("SEVEN \n");
            break;
        case 8:
            printf("EIGHT \n");
            break;
        case 9:
            printf("NINE \n");
            break;

        }
        res=res/10;
        }
}



