#include <stdio.h>

int main(void)
{
	union employee
	{
		int start_year;
		int dpt_code;
		int id_number;
	} info;
	/* initializing start_year and printing values of all members */
	info.start_year = 1997;
	printf("Start Year: %d\n", info.start_year);
	printf("Dpt Code:   %d\n", info.dpt_code);
	printf("ID #:       %d\n", info.id_number);

	/* initializing dpt_code and printing out values of all members */
	info.dpt_code = 8;
	printf("Start Year: %d\n", info.start_year);
	printf("Dpt Code:   %d\n", info.dpt_code);
	printf("ID #:       %d\n", info.id_number);

	/* initializing id_number and printing values of all members */
	info.id_number = 1234;
	printf("Start Year: %d\n", info.start_year);
	printf("Dpt Code:   %d\n", info.dpt_code);
	printf("ID #:       %d\n", info.id_number);

	return (0);
}

