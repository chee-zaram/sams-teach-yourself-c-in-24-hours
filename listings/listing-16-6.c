/* passing multidimensional arrays to functions */
#include <stdio.h>
/* function declaration */
int DataAdd1(int list[][5], int max1, int max2);
int DataAdd2(int *list, int max1, int max2);
/* main() funtion */
int main(){
	int list[2][5]={1, 2, 3, 4, 5,
					5, 4, 3, 2, 1};
	int *ptr_int;

	printf("The sum returned by DataAdd1(): %d\n",
			DataAdd1(list, 2, 5));
	ptr_int=&list[0][0];
	printf("The sum returned by DataAdd2(): %d\n",
			DataAdd2(ptr_int, 2, 5));

	return 0;
}
/* function definition */
int DataAdd1(int list[][5], int max1, int max2){
	int i, j;
	int sum=0;

	for (i=0; i<max1; i++)
		for (j=0; j<max2; j++)
		sum+=list[i][j];
	return sum;
}
/* funcion definition */
int DataAdd2(int *list, int max1, int max2){
	int i, j;
	int sum=0;

	for (i=0; i<max1; i++)
		for (j=0; j<max2; j++)
		sum+=*(list + i*max2 + j);
	return sum;
}

