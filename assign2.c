/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compareString(const void *pa , const void *pb)
{
  //const char *p1=pa;
  //const char *p2=pb;
  return strcmp(pa, pb);

}

int main()																							//     qsort without dynamic allocation of string
{ 
	char string[][20]={"swastik","shristi","akanksha","ashu","vatsal"};

	int n= sizeof(string)/20;

	qsort(string,n,20,compareString);

	for (int i = 0; i < n; ++i)
	{
		printf("%s\n",string[i]);
	}
	return 0;
}

*/

/*#include<stdio.h>
#include<stdio.h>
int compareint(const void *pa ,const void *pb)													//     qsort without dynamic allocation of integer
{ 
{
	const int *p1=pa;
	const int *p2=pb;
																								//return *(const int *)pa - *(const int *)pb;
    return *p1 - *p2;
}
 int main()
 {
 	int num[]={10,32,12,65,3,76,34};
 	int n=sizeof(num)/sizeof(int);

 	qsort(num,n,sizeof(int),compareint);
 	for (int i = 0; i < n; ++i)
 	{
 		printf("%d\n",num[i] );
 	}
 	return 0;
 }*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
																									//     qsort with dynamic allocation of string
{ 
int compareString(const void *pa , const void *pb)
{
																					//const char *p1=pa;
																					//const char *p2=pb;

  																					//return strcmp(*(const char**)pa, *(const char**)pb);
	return strcmp(pa, pb);

}

int main()
{   
	int n,l;
	char **str ;
	 char temp[20];
	printf("how many string to print\n");
	scanf("%d",&n);
	str=(char**)malloc(sizeof(char*)*n);

	for (int i = 0; i < n; ++i)
	{ 
		printf("enter the names\n");
		scanf("%s",temp);									///////////MEMOERY ALLOCATION CODE
		l= strlen(temp);
		str[i]=(char*)malloc(sizeof(char)*l+1);

		strcpy(str[i],temp);

		 

	}

//--------------------------------------------------------------------------------------


	qsort(str,n,sizeof(char*),compareString);                              //////////////////quick sort algo
	
//-=----------------------------------------------------------------------------------------

	for (int i = 0; i < n; ++i)
	{
		printf("%s\n",str[i] );
	}
	for (int i = 0; i < n; ++i)
	{
		free(str[i]);
	}
	free(str);
}