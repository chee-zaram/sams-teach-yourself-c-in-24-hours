/**
 * program to redirect input stream so that you can use scanf() function
 * to perform the reading opertion.
 */
#include <stdio.h>

enum {SUCCESS, FAIL,
	len = 30,
	row = 3};

void Read(FILE *fptr, char *str);
int ErrorMsg(char *str);

int main(void)
{
	FILE *fptr;
	char *filename = "strnum.mix";
	int reval = SUCCESS;

	if ((fptr = freopen(filename, "r", stdin)) == NULL)
	{
		reval = ErrorMsg(filename);
	}
	else
	{
		Read(fptr, filename);
		fclose(fptr);
	}

	return (reval);
}

void Read(FILE *fptr, char *str)
{
	int i, distance;
	char cities[len];

	printf("The following data was read from %s using redirection:\n",
			str);

	for (i = 0; i < row; i++)
	{
		scanf("%s%d", cities, &distance);
		printf("%-23s  %4d\n", cities, distance);
	}
}

int ErrorMsg(char *str)
{
	int reval = FAIL;

	printf("Failed to open %s.\n", str);

	return (reval);
}

