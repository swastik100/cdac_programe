#include<stdio.h>

void main()
{
    int a,b; char str[20];
    char *word[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE1","SIX","SEVEN","EIGHT","NINE"};
    printf("ENTER THE DIGIT TO PRINT IN CHARACTER");
    scanf("%d",&a);
    itoa(a,str,10);
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%s \n",word[str[i]-'0']);
    }
}
