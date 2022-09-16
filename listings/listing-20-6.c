/* applying bit fields */
#include <stdio.h>
#include <string.h>

struct bit_field
{
	int cable: 1;
	int dish: 1;
};

struct survey
{
	char name[20];
	struct bit_field c_d;
	int age;
	int hour_per_week;
	union
	{
		char cable_company[16];
		char dish_company[16];
	} provider;
};

void DataEnter(struct survey *ptr);
void DataDisplay(struct survey *ptr);

int main(void)
{
	struct survey tv;

	DataEnter(&tv);
	DataDisplay(&tv);

	return (0);
}

/* function definition */
void DataEnter(struct survey *ptr)
{
	char is_yes[4];
	char gets();

	printf("Are you using cable at home? (Yes or No)\n");
		gets(is_yes);
	if ((is_yes[0] == 'Y') || (is_yes[0] == 'y'))
	{
		printf("Enter the cable company name:\n");
		gets(ptr->provider.cable_company);
		ptr->c_d.cable = 1;
		ptr->c_d.dish = 0;
	}
	else
	{
		printf("Are you using a satellite dish? (Yes or No)\n");
			gets(is_yes);
		if ((is_yes[0] == 'Y') || (is_yes[0] == 'y'))
		{
			printf("Enter the satellite dish company name:\n");
			gets(ptr->provider.dish_company);
			ptr->c_d.cable = 0;
			ptr->c_d.dish = 1;
		}
		else
		{
			ptr->c_d.cable = 0;
			ptr->c_d.dish = 0;
		}
	}
	printf("Please enter your name:\n");
		gets(ptr->name);
	printf("Your age:\n");
		scanf("%d", &ptr->age);
	printf("How many hours you spend on watching TV per week (Num only):\n");
		scanf("%d", &ptr->hour_per_week);
}

/* function definition */
void DataDisplay(struct survey *ptr)
{
	printf("\nHere's what you've entered:\n");
	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);
	printf("Hours per week: %d\n", ptr->hour_per_week);
	if (ptr->c_d.cable && !ptr->c_d.dish)
		printf("Your cable company is: %s\n",
				ptr->provider.cable_company);
	else if (ptr->c_d.dish && !ptr->c_d.cable)
		printf("YOur dish company is: %s\n",
				ptr->provider.dish_company);
	else
		printf("You don't have a cable or a satellite dish.\n");
	printf("\nThanks and Bye!\n");
}

