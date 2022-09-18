/* reading and writing one line at a time */
#include <stdio.h>

enum {SUCCESS, FAIL, MAX_LEN = 81};

void LineReadWrite(FILE *fin, FILE *fout);

int main(void)
{
	FILE *fptr1, *fptr2;
	char filename1[] = "haiku.txt";
	char filename2[] = "outhaiku.txt";
	int reval = SUCCESS;

	if ((fptr1 = fopen(filename1, "r")) == NULL)
	{
		printf("Cannot open %s for reading.\n", filename1);
		reval = FAIL;
	}
	else if ((fptr2 = fopen(filename2, "w")) == NULL)
	{
		printf("Cannot open %s for writing.\n", filename2);
		reval = FAIL;
	}
	else
	{
		LineReadWrite(fptr1, fptr2);
		fclose(fptr1);
		fclose(fptr2);
	}

	return (reval);
}

/* function definition */
void LineReadWrite(FILE *fin, FILE *fout)
{
	char buff[MAX_LEN];

	while (fgets(buff, MAX_LEN, fin) != NULL)
	{
		fputs(buff, fout);
		printf("%s", buff);
	}
}

