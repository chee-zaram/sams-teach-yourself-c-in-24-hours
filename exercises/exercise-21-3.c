/**
 * program to write a given string into a file called test_21.txt
 * by writing one character at a time,
 * and also printing out string to screen.
 */
#include <stdio.h>

enum {SUCCESS, FAIL};

void WriteS(FILE *fw);

int main(void)
{
	FILE *fptr;
	char filename[] = "test_21.txt";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "w")) == NULL)
	{
		printf("Could not open %s for writing.\n", filename);
		reval = FAIL;
	}
	else
	{
		WriteS(fptr);
		fclose(fptr);
	}
	return (reval);
}

/* function definition */
void WriteS(FILE *fw)
{
	int c, i = 0;
	char str[] = "Disk file I/O is fun.";

	while ((c = str[i]) != '\0')
	{
		fputc(c, fw);
		putchar(c);
		i++;
	}
}

