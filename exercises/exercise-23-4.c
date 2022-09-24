/* using nested #if directives */
#include <stdio.h>

#define C_LANG	 'C'
#define NO_ERROR  0

int main(void)
{
	#if C_LANG == 'C'
		#if B_LANG == 'B'
			#undef C_LANG
			#define C_LANG "I know C language.\n"
			#undef B_LANG
			#define B_LANG "I know BASIC\n"
			printf("%s%s", C_LANG, B_LANG);
		#else
			#undef C_LANG
			#define C_LANG "I only know C language.\n"
			printf("%s", C_LANG);
		#endif
	#elif B_LANG == 'B'
		#undef B_LANG
		#define B_LANG "I only know BASIC.\n"
		printf("%s", B_LANG);
	#else
		printf("I don't know C or BASIC.\n");
	#endif

	return (NO_ERROR);
}

