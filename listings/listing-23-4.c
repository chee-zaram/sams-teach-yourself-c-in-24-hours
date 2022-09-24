/* nesting #if */
#include <stdio.h>

/* macro definitions */
#define ZERO	 0
#define ONE	 1
#define TWO	 (ONE + ONE)
#define THREE	 (TWO + ONE)
#define TEST_1	 ONE
#define TEST_2	 TWO
#define TEST_3	 THREE
#define MAX_NUM	 THREE
#define NO_ERROR ZERO

/* function declaration */
void StrPrint(char **ptr_s, int max);

int main(void)
{
	char *str[MAX_NUM] = {"The choice of a point of view",
		"is the initial act of culture.",
		"--- by O. Gasset"};
	#if TEST_1 == 1
		#if TEST_2 == 2
			#if TEST_3 == 3
				StrPrint(str, MAX_NUM);
			#else
				StrPrint(str, MAX_NUM - ONE);
			#endif
		#else
			StrPrint(str, MAX_NUM - TWO);
		#endif
	#else
		printf("No TEST macro has been set.\n");
	#endif

	return (NO_ERROR);
}

/* function definition */
void StrPrint(char **ptr_s, int max)
{
	int i;

	for (i = 0; i < max; i++)
		printf("Content: %s\n", ptr_s[i]);
}

