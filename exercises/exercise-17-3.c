#include <stdio.h>
#include <stdlib.h>

int main(){
	float *ptr_mall, *ptr_call;
	int inp;
	int termination=0;
	
	printf("Enter the total number of float data: \n");
	scanf("%d", &inp);
	ptr_call=calloc(inp, sizeof(float));
	ptr_mall=malloc(inp*sizeof(float));

	if (ptr_call==NULL){
		printf("calloc() failed.\n");
		termination=1;
	}
	else if (ptr_mall==NULL){
		printf("malloc() failed");
		termination=1;
	}
	else{
		printf("The initial value of ptr_call is %5.2f, and ptr_mall is %5.2f.\n",
					*ptr_call, *ptr_mall);
		free(ptr_call);
		free(ptr_mall);
		termination=0;
	}
	return termination;
}

