/**
 * program to write a given string into a file called test_21.txt
 * by writing one character block at a time.
 */
#include <stdio.h>
#include <string.h>

enum {SUCCESS, FAIL};

void WriteCB(FILE *fw, char *str);

int main(void)
{
	FILE *fptr;
	char str[] = "Disk file I/O is fun.";
	char filename[] = "test_21_4.txt";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "w")) == NULL)
	{
		printf("Could not open %s for writing.\n", filename);
		reval = FAIL;
	}
	else
	{
		WriteCB(fptr, str);
		fclose(fptr);
	}
	return (reval);
}

/* function definition */
void WriteCB(FILE *fw, char *str)
{
	int len;

	len = strlen(str);
	fwrite(str, sizeof(char), len, fw);
	puts(str);
}

