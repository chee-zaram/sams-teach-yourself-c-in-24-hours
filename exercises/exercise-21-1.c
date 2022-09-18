/* program to read the text file haiku.txt and count the number of characters
 * in the file, while also printing out the content of the file and the total
 * character number on the screen.
 */
#include <stdio.h>

enum {SUCCESS, FAIL};

void cont_num(FILE *fr);

int main(void)
{
	FILE *fptr;
	char filename[] = "haiku.txt";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "r")) == NULL)
	{
		printf("Could not open %s.\n", filename);
		reval = FAIL;
	}
	else
	{
		cont_num(fptr);
		fclose(fptr);
	}
	return (reval);
}

/* function definition */
void cont_num(FILE *fr)
{
	char c;
	int num = 0;

	while ((c = fgetc(fr)) != EOF)
	{
		putchar(c);
		num++;
	}
	printf("\nNumber of characters is %d.\n", num);
}

