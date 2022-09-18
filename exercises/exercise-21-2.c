/** 
 * program to receive a string entered by the user, and then save the string
 * into a file with the name also given by the user.
 */
#include <stdio.h>

enum {SUCCESS, FAIL};

void Write(FILE *fw);

int main(void)
{
	FILE *fptr;
	char filename[20];
	char gets();
	int reval = SUCCESS;

	printf("Enter a file name:\n");
		gets(filename);
	printf("Enter a string into the file [ctrl-d to end]:\n");
	if ((fptr = fopen(filename, "w")) == NULL)
	{
		printf("Could not open %s.\n", filename);
		reval = FAIL;
	}
	else
	{
		Write(fptr);
		fclose(fptr);
	}
	return (reval);
}

/* function definition */
void Write(FILE *fw)
{
	char c;

	while ((c = fgetc(stdin)) != EOF)
	{
		fputc(c, fw);
	}
	printf("\nSUCCESS! File is ready.\n");
}

