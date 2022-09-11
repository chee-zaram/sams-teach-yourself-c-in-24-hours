#include <stdio.h>

char gets();
struct department
{
	int code;
	char name[32];
	char position[16];
};
typedef struct department DPT;

struct employee
{
	DPT d;
	int id;
	char name[32];
};
typedef struct employee EMPLY;

void InfoDisplay(EMPLY *ptr);
void InfoEnter(EMPLY *ptr);

int main(void)
{
	EMPLY info = {
		{
			1,
			"Marketing",
			"Manager"
		},
		1,
		"B. Smith"
	};

	printf("Here is a sample:\n");
	InfoDisplay(&info);

	InfoEnter(&info);

	printf("\nHere are what you entered:\n");
	InfoDisplay(&info);
	
	return (0);
}

void InfoDisplay(EMPLY *ptr)
{
	printf("Name: %s\n", ptr->name);
	printf("ID #: %04d\n", ptr->id);
	printf("Dept. name: %s\n", ptr->d.name);
	printf("Dept. code: %02d\n", ptr->d.code);
	printf("Your position: %s\n", ptr->d.position);
}

void InfoEnter(EMPLY *ptr)
{
	printf("\nPlease enter your information: \n");
	printf("Your name:\n");
		gets(ptr->name);
	printf("Your position:\n");
		gets(ptr->d.position);
	printf("Dept. name:\n");
		gets(ptr->d.name);
	printf("Dept. code:\n");
		scanf("%d", &(ptr->d.code));
	printf("Your employee ID #:\n");
		scanf("%d", &(ptr->id));
}

