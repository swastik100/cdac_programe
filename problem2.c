    #include<stdio.h>
    #include<stdlib.h>

    int main()

    {
      int n,i,sum;
      int count=0;
     
      printf("Perfect numbers are: ");

      for(n=1;n<10000;n++)
      {
        i=1;
        sum = 0;
     
        while(i<n)
        {
          if(n%i==0)
               sum=sum+i;
              i++;
        }
        
        
        if(sum==n && count <=3)
        {
          printf("%d ",n);
           count++;
         }  



         
      }
     
      return 0;
    }