/* program to get number of bytes to allocate from user
 * initialize allocated memory with consecutive integers from 1
 * add integers and print out final result */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int input, *ptr, i, sum;
	int termination=0;

	printf("Enter the number of bytes to be allocated:\n");
	scanf("%d", &input);
	ptr=malloc((input/sizeof(int))*(sizeof(int)));
	if (ptr==NULL){
		printf("malloc() failed.\n");
		termination=1;
	}
	else {
		i=1;
		sum=0;
		while (input>=sizeof(int)){
			sum+=i;
			i++;
			input-=sizeof(int);
		}
		printf("Given the bytes indicated, the sum of integers starting from 1 is: %d.\n", sum);
	}	
	free(ptr);
	return termination;
}

