#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
	int marks;
	char name[20];
}Student_t;

int compareMarks(const void *pa, const void *pb)
{
	const Student_t *p1 = pa;
	const Student_t *p2 = pb;
	return p1-> marks - p2-> marks;
}
int main()
{
	Student_t record[] = { {56,"Srishti"},
	                        {84,"Swastik"},
	                        {94,"Akansha"},
	                        {65,"Ashu"},
	                        {99,"Vatsal"}
	                     };

	int n = sizeof(record) / sizeof(Student_t);

	qsort(record,n,sizeof(Student_t),compareMarks);                              //////////////////quick sort algo
	
	for (int i = 0; i < n; ++i)
	{
		printf("%d %s\n",record[i].marks,record[i].name );
	}
	return 0;
}