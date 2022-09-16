#include <stdio.h>
#include <string.h>

int main(void)
{
	union u
	{
		double x;
		int y;
	} a_union;

	struct s
	{
		double x;
		int y;
	} a_struct;

	printf("The size of double: %d-byte\n",
			(int)sizeof(double));
	printf("The size of int:    %d-byte\n",
			(int)sizeof(int));

	printf("The size of a_union:  %d-byte\n",
			(int)sizeof(a_union));
	printf("The size of a_struct: %d-byte\n",
			(int)sizeof(a_struct));

	return (0);
}

