/* using the calloc() function */
#include <stdio.h>
#include <stdlib.h>
/* main() function */
int main(){
	float *ptr1, *ptr2;
	int i, n;
	int termination=1;
	
	n=5;
	ptr1=calloc(n, sizeof(float));
	ptr2=malloc(n*sizeof(float));
	if (ptr1==NULL)
		printf("malloc() failed.\n");
	else if (ptr2==NULL)
		printf("calloc() failed.\n");
	else {
		for (i=0; i<n; i++)
			printf("ptr1[%d]=%5.2f, ptr2[%d]=%5.2f\n",
					i, *(ptr1+1), i, *(ptr2+i));
		free(ptr1);
		free(ptr2);
		termination=0;
	}
	return termination;
}

