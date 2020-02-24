
#include <stdio.h>
void F1(){
	printf("F1\n");
}

void F2(){
	printf("F2\n");
}

void F3(){
	printf("F3\n");
}

int main(){
	void (*pfn[3])()= {F1,F2,F3};
	int i=0;

	for (i=0;i<3; ++i){
		(*pfn[i])();
	}
	return 0;

}
