/* reading and writing one character at a time */
#include <stdio.h>

enum {SUCCESS, FAIL};

void CharReadWrite(FILE *fin, FILE *fout);

int main(void)
{
	FILE *fptr1, *fptr2;
	char filename1[] = "haiku.txt";
	char filename2[] = "outhaiku.txt";
	int reval = SUCCESS;

	if ((fptr1 = fopen(filename1, "r")) == NULL)
	{
		printf("Cannot open %s.\n", filename1);
		reval = FAIL;
	}
	else if ((fptr2 = fopen(filename2, "w")) == NULL)
	{
		printf("Cannot open %s.\n", filename2);
		reval = FAIL;
	}
	else
	{
		CharReadWrite(fptr1, fptr2);
		fclose(fptr1);
		fclose(fptr2);
	}

	return (reval);
}
/* function definition */
void CharReadWrite(FILE *fin, FILE *fout)
{
	int c;

	while ((c = fgetc(fin)) != EOF)
	{
		fputc(c, fout); /* write to a file */
		putchar(c); /* put the character to the screen */
	}
}

