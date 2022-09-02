/* passing arrays to functions */
#include <stdio.h>

int AddThree(int list[]);

int main(){
	int sum, list[3];

	printf("Enter three integers seperated by spaces: \n");
	scanf("%d%d%d", &list[0], &list[1], &list[2]);
	sum=AddThree(list);
	printf("The sum of the three integers is: %d\n", sum);

	return 0;
}

int AddThree(int list[]){
	int i;
	int result=0;

	for (i=0; i<3; i++)
		result+=list[i];
	return result;
}

