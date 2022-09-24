/* mulitplying numbers with macros */
#include <stdio.h>

#define MUL(x, y)	((x) * (y))
#define TWO		2
#define THREE		3
#define NO_ERROR	0

int main(void)
{
	printf("The result of multiplying 2 and 3 with macros is: %d.\n",
			MUL(TWO, THREE));

	return (NO_ERROR);
}

