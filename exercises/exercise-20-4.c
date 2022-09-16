#include <stdio.h>
#include <string.h>

struct bit_field
{
	int us: 1;
	int not_us: 1;
};

struct citizen
{
	char name[25];
	char state[30];
	struct bit_field u_nu;
	union us_or_not
	{
		char country[30];
		char other_country[30];
	} place;
};

void GetData(struct citizen *ptr);
void PrintData(struct citizen *ptr);

int main(void)
{
	struct citizen user;

	GetData(&user);
	PrintData(&user);

	return (0);
}

void GetData(struct citizen *ptr)
{
	char gets();
	char is_yes[4];

	printf("What is your name:\n");
		gets(ptr->name);
	printf("Are you a U.S. Citizen? (Yes or No)\n");
		gets(is_yes);
	if ((is_yes[0] == 'y') || (is_yes[0] == 'Y'))
	{
		strcpy(ptr->place.country, "U.S. Citizen");
		printf("Which of the States are you from?\n");
			gets(ptr->state);
		ptr->u_nu.us = 1;
		ptr->u_nu.not_us = 0;
	}
	else if ((is_yes[0] == 'n') || (is_yes[0] == 'N'))
	{
		printf("Which Country do you come from?\n");
			gets(ptr->place.other_country);
		ptr->u_nu.us = 0;
		ptr->u_nu.not_us = 1;
	}
	else
	{
		ptr->u_nu.us = 0;
		ptr->u_nu.not_us = 0;
	}
}

void PrintData(struct citizen *ptr)
{
	printf("\nHere are the information you gave\n");
	if (ptr->u_nu.us && !ptr->u_nu.not_us)
	{
		printf("Your Name:    %s\n", ptr->name);
		printf("Your country: %s\n", ptr->place.country);
		printf("Your State:   %s\n", ptr->state);
	}
	else if (ptr->u_nu.not_us && !ptr->u_nu.us)
	{
		printf("Your Name:    %s\n", ptr->name);
		printf("Your country: %s\n", ptr->place.other_country);
	}
	else
	{
		printf("Your name is %s, a citizen of the world!!!\n",
				ptr->name);
	}
	printf("\nThanks and Bye Bye!\n");
}

