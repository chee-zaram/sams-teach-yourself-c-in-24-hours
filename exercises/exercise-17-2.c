/* program to allocate block of memory 100x the float date type
 * using calloc(), then reallocating the memory to hold 50 more items
 * of float data type */
#include <stdio.h>
#include <stdlib.h>

int main(){
	double *ptr;
	int i, n=100;
	int termination=0;

	ptr=calloc(n, sizeof(float));
	if (ptr==NULL){
		printf("calloc() failed.\n");
		termination=1;
	}
	else{
		ptr=realloc(ptr, 150*sizeof(float));
		if (ptr==NULL){
			printf("realloc() failed.\n");
			termination=1;
		}
		else
			free(ptr);
	}
	printf("Proccesses comepleted.\n");
	return termination;
}

