#include<stdio.h>  

int *arr;

void add(int count)
  { 
     printf("Enter 2 no.");
	for(int i=0 ; i<count ; i++)
		{
			scanf("%d",&arr[i]);
		}
      int k=arr[0]+arr[1];
      printf(" addition is %d",k);

  }
     void mul(int count)
     {
       count=2;
	for(int i=0;i<count;i++)
	{
	 scanf("%d",&arr[i]);
	}

         int k=arr[0]*arr[1];
         printf(" multiplication is %d",k);


     }

     void great(int count)
     {
       for(int i=0;i<count;i++)
	{
	 scanf("%d",&arr[i]);
	}


         if(arr[0]>arr[1] && arr[0]>arr[2])
             printf("1st is greater");
         else if(arr[1]>arr[0] && arr[1]>arr[2])
             printf("2nd is greater");
        else
            printf("3rd no. is greater");
     }

     void smaller(int count)
     {
	 for(int i=0;i<count;i++)
        { 
         scanf("%d",&arr[i]);
        }         if(arr[0]<arr[1] && arr[0]<arr[2])
             printf("1st is smaller");
         else if(arr[1]<arr[0] && arr[1]<arr[2])
             printf("2nd is smaller");
        else
            printf("3rd no. is smaller");
     }

/*      void goback()
        {
                exit(0);
        }

*/

     int main()
 {
        void (*ptr[4])(int) = {add,mul,great,smaller};

        printf("Enter your choice \n 1- add \n 2-mul \n 3-greater \n 4- smaller ");
         int n,arr[10];
        scanf("%d",&n);
	if(n==1 || n==2)
        (*ptr[n-1])(2);
	else
	(*ptr[n-1])(3);

        return 0;

     }


