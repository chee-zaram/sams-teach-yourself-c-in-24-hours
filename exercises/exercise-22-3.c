/**
 * program that saves an int and a double value into a binary file data.bin
 * and reads them back from the binary file, while also printing out what has
 * been written, and read.
 */
#include <stdio.h>

enum {SUCCESS, FAIL};

void Write(FILE *fptr);
void Read(FILE *fptr);
int ErrorMsg(char *str);

int main(void)
{
	FILE *fptr;
	char *filename = "data.bin";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "w+b")) == 0)
	{
		reval = ErrorMsg(filename);
	}
	else
	{
		Write(fptr);
		rewind(fptr);
		Read(fptr);
		fclose(fptr);
	}

	return (reval);
}

void Write(FILE *fptr)
{
	int x;
	double y;

	x = 10000;
	y = 123.45;

	fwrite(&x, sizeof(int), 1, fptr);
	fwrite(&y, sizeof(double), 1, fptr);
	printf("The int written is: %d\nThe double written is: %.2f\n", x, y);
}

void Read(FILE *fptr)
{
	int x;
	double y;

	fread(&x, sizeof(int), (size_t)1, fptr);
	fread(&y, sizeof(double), (size_t)1, fptr);
	printf("\nThe int read is: %d\nThe double read is: %.2f\n", x, y);
}

int ErrorMsg(char *str)
{
	int reval = FAIL;

	printf("Could not open binary file %s for reading and writing\n", str);

	return (reval);
}

