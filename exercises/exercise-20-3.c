/* program to get the name, country, and if US, the State of user */
#include <stdio.h>
#include <string.h>

/* declaring structure */
struct citizen
{
	char name[25];
	char state[30];
	union us_or_not
	{
		char other_country[30];
		char country[20];
	} place;
};
/* setting synonym */
typedef struct citizen SC;

/* declaring functions */
void GetData(SC *ptr);
void PrintData(SC *ptr);

int main(void)
{
	SC user;

	GetData(&user);
	PrintData(&user);

	return (0);
}

/* function definition */
void GetData(SC *ptr)
{
	char gets();
	char is_yes[4];
	
	printf("Enter your name:\n");
		gets(ptr->name);
	printf("Are you a U.S. citizen? (Yes or No)\n");
		gets(is_yes);
	if ((is_yes[0] == 'y') || (is_yes[0] == 'Y'))
	{
		strcpy(ptr->place.country, "United States");
		printf("Which of the States do you come from:\n");
			gets(ptr->state);
	}
	else if ((is_yes[0] == 'n') || (is_yes[0] == 'N'))
	{
		printf("Which country are you from:\n");
			gets(ptr->place.other_country);
		strcpy(ptr->state, "Nill");
	}
	else
	{
		printf("\nYou are a citizen of the world!\n");
		strcpy(ptr->place.country, "Nill");
		strcpy(ptr->state, "Nill");
	}
}

/* function definition */
void PrintData(SC *ptr)
{
	printf("\nBelow is all the information you gave:\n");
	printf("NB: State section is Nill for non U.S. Citizens\n");
	printf("\nYour Name:    %s\n", ptr->name);
	printf("Your Country: %s\n", ptr->place.country);
	printf("Your State:   %s\n", ptr->state);
	printf("\nThanks and Goodbye!\n");
}

