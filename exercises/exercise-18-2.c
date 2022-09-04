/* program to print out the size of synonyms and their data types */
#include <stdio.h>

int main(){
	typedef char WORD;
	typedef int SHORT;
	typedef long LONG;
	typedef float FLOAT;
	typedef double DFLOAT;

	printf("The size of WORD is %ld-bytes while char is %ld-bytes\n", (sizeof(char)*4), sizeof(char));
	printf("The size of SHORT is %ld-bytes while int is %ld-bytes\n", (sizeof(char)*5), sizeof(int));
	printf("The size of LONG is %ld-bytes while long is %ld-bytes\n", (sizeof(char)*4), sizeof(long));
	printf("The size of FLOAT is %ld-bytes while float is %ld-bytes\n", (sizeof(char)*5), sizeof(float));
	printf("The size of DFLOAT is %ld-bytes while double is %ld-bytes\n", (sizeof(char)*6), sizeof(double));
	return 0;
}

