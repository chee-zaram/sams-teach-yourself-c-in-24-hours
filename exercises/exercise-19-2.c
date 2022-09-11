#include <stdio.h>

struct employee
{
	int id;
	char name[32];
};

typedef struct employee EY;

void Display(EY *ey);
char gets();

int main(void)
{
	EY info = {
		1,
		"B. Smith"};
	
	printf("Find a sample below:\n");
	Display(&info);
	
	printf("\nType your name:\n");
		gets(info.name);
	printf("\nEnter your ID #:\n");
		scanf("%03d", &info.id);
	
	printf("\n\nYour entries are:\n");
	Display(&info);

	return (0);
}

void Display(EY *ey)
{
	printf("Employee name: %s\n", ey->name);
	printf("Employee ID #: %d\n", ey->id);
}

