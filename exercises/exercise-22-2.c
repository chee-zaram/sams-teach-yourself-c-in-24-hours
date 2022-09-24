/**
 * program similar to exercise-22-1.c but uses rewind() to reset
 * the file position indicator to the beginning of the file.
 */
#include <stdio.h>

enum {SUCCESS, FAIL, Max_len = 80};

void Seek(FILE *fptr);
int Tell(FILE *fptr);
void DataRead(FILE *fptr);

int main(void)
{
	FILE *fptr;
	char *filename = "LaoTzu.txt";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "r")) == NULL)
	{
		printf("Could not open %s.\n", filename);
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

	printf("\nThe strings read in reverse order are:\n");
	fseek(fptr, offset3, SEEK_SET);
	DataRead(fptr);
	fseek(fptr, offset2, SEEK_SET);
	DataRead(fptr);
	rewind(fptr);
	DataRead(fptr);
}

int Tell(FILE *fptr)
{
	int pos;

	pos = ftell(fptr);
	printf("The file position indicator is at %d.\n", pos);

	return (pos);
}

void DataRead(FILE *fptr)
{
	char buff[Max_len];

	fgets(buff, Max_len, fptr);
	printf("%s", buff);
}

