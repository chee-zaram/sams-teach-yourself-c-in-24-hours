/* memory sharing in unions */
#include <stdio.h>

int main(void)
{
	union employee
	{
		int start_year;
		int dpt_code;
		int id_number;
	} info;
	/* initializing start_year */
	info.start_year = 1997;
	/* initializing dpt_code */
	info.dpt_code = 8;
	/* initializing id_number */
	info.id_number = 1234;

	/* display content of union */
	printf("Start Year: %d\n", info.start_year);
	printf("Dpt. Code:  %d\n", info.dpt_code);
	printf("ID #:       %d\n", info.id_number);

	return (0);
}

