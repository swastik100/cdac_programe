#include<stdio.h>  
void add()
  {
      int i=2,j=3,k;
	k=i+j;
      printf(" addition is %d",k);
      
  }   
     void mul()
     {

         int k=3*4;
         printf(" addition is %d",k);
	

     }

     void great()
     {
	int a=1,b=6,c=4;
         if(a>b && a>c)
             printf("1st is greater");
         else if(b>c && b>a)
             printf("2nd is greater");
        else
            printf("3rd no. is greater");
     }

     void smaller()
     {
         int a=5,b=67,c=3;
	printf("Enter 3 no.s");
         if(a<b && a<c)
             printf("1st is smaller");
         else if(b<c && b<a)
             printf("2nd is smaller");
        else
            printf("3rd no. is smaller");
    }

/*	void goback()
	{
		exit(0);
	}

*/
     


     int main()
     {
         void (*ptr[4])() = {add,mul,great,smaller};
        printf("Enter your choice \n 1- add \n 2-substract \n 3-greater \n 4- smaller\n 5- Exit");
         int n;
	scanf("%d",&n);
	(*ptr[n-1])();
	return 0;

     }


