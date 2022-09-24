/* using #if, #elif, and #else directives */
#include <stdio.h>

#define UPPER_CASE	0
#define NO_ERROR	0

int main(void)
{
	#if UPPER_CASE
		printf("THIS LINE IS PRINTED OUT,\n");
		printf("BECAUSE UPPER_CASE IS DEFINED,\n");
		printf("AND EVALUATES TO A NONZERO NUMBER.\n");
	#elif LOWER_CASE
		printf("This line is printed out,\n");
		printf("because LOWER_CASE is defined,\n");
		printf("and evalutes to nonzero number\n");
	#else
		printf("This line is printed out,\n");
		printf("because neither UPPER_CASE nor LOWER_CASE is defined,\n");
		printf("and evaluates to a non zero number.\n");
	#endif

	return (NO_ERROR);
}

