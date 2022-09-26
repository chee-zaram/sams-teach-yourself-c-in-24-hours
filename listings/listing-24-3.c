/* driver file */
#include "hour_24.h"

int main(void)
{
	int ch;

	printf("Enter a for adding, d for deleting,\n");
	printf("p for displaying, and q for exit:\n");
	while ((ch = getchar()) != 'q')
	{
		main_interface(ch); /* process input from user */
	}

	list_node_free();
	printf("\nBye!\n");

	return (0);
}

