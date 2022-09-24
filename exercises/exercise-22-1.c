/**
 * program to use ftell() to find the position of three strings in a file,
 * and call fseek() to set the file position inidicator in such a way
 * that the three strings are printed.
 */
#include <stdio.h>

enum {SUCCESS, FAIL};

void DataRead(FILE *fptr);
void Seek(FILE *fptr);
int Tell(FILE *fptr);

int main(void)
{
	FILE *fptr;
	char *filename = "LaoTzu.txt";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "r")) == NULL)
	{
		printf("Could not open %s for reading.\n", filename);
		reval = FAIL;
	}
	else
	{
		Seek(fptr);
		fclose(fptr);
	}

	return (reval);
}

void Seek(FILE *fptr)
{
	int offset1, offset2, offset3;

	offset1 = Tell(fptr);
	DataRead(fptr);
	printf("\n");
	offset2 = Tell(fptr);
	DataRead(fptr);
	printf("\n");
	offset3 = Tell(fptr);
	DataRead(fptr);

	printf("\nThe strings in reverse order are:\n");
	fseek(fptr, offset3, SEEK_SET);
	DataRead(fptr);
	fseek(fptr, offset2, SEEK_SET);
	DataRead(fptr);
	fseek(fptr, offset1, SEEK_SET);
	DataRead(fptr);
}

int Tell(FILE *fptr)
{
	int pos = ftell(fptr);
	printf("The file position indicator is at: %d\n", pos);

	return (pos);
}

void DataRead(FILE *fptr)
{
	char buff[80];

	fgets(buff, 80, fptr);
	printf("%s", buff);
}

