#include<stdio.h>
#include<string.h>

void convert(char *num)
{
   // int a,b; char str[20];
   int len = strlen(num);            ///////// find number of digit
   if(len ==0)
   {
    fprintf(stderr,"string is empty");
    return;
   }

    char *single_digit[]={"ZERO ","ONE ","TWO ","THREE ","FOUR ","FIVE ","SIX ","SEVEN ","EIGHT ","NINE "};

    char *two_digit[]={"TEN ","ELEVEN ","TWELVE ","THIRTEEN ","FOURTEEN ","FIVTEEN ","SIXTEEN ","SEVENTEEN ","EIGHTEEN ","NINETEEN "};

    char *tens_multiple[]={"TWENTY ","THIRTY ","FOURTY ","FIVETY ","SIXTY ","SEVENTY ","EIGHTY ","NINETY "};

    char *tens_power[]={"HUNDRED ","THOUSAND "};

    // SINGLE NUMBER

    if(len==1)
    {
        printf("%s \n ",single_digit[*num-'0']);
        return;
    }

    while(*num!='\0')
    {
        if(len>=3)
        {
            if(*num-'0'!=0)
            {
                printf("%s",single_digit[*num -'0']);       // prints single digit number
                printf("%s",tens_power[len-3]);             // its prints hundred
            }
            --len;
        }
        else        // for last 2 digit
            {
                if(*num=='1')
                {
                    int sum = *num -'0'+ *(num+1)-'0';
                    printf("%s\n",two_digit[sum]);
                    return;
                }
                else if(*num == '2'&& *(num+1)=='0')
                {
                    printf("TWENTY \n");
                    return;
                }

                ////value from 21 to 99
                else
                {
                    int i=*num -'0';
                    printf("%s",i?tens_multiple[i-2]:"");
                    ++num;
                    if(*num!='0')
                        printf("%s",single_digit[*num-'0']);
                }
            }
            ++num;
    }
}

int main()
{
    //int b;
    char a[10];
    printf("enter the number :");

    scanf("%s",a);
   // itoa(b,a,10);
    printf("the number of words is :");
    convert(a);
    return 0;
}
