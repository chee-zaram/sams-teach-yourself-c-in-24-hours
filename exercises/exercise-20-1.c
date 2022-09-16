/* unions */
#include <stdio.h>
#include <string.h>

int main(void)
{
	union menu {
		char name[23];
		double price;
	} dish;

	printf("The content assigned to the union seperately:\n");
	/* reference name */
	strcpy(dish.name, "Sweet and Sour Chicken");
	dish.price = 9.95;
	/* reference price */
	printf("Dish Name: %s\n", dish.name);
	printf("Dish Price: %5.2f\n", dish.price);

	return (0);
}

/**
 * Q-A: The result of the program is a Dish Name which initialized to 9.95,
 * and since the name member of dish variable is of char type,
 * 9.95 is not within the range of its numeric values and saw displays
 * "fffff�#@d Sour Chicken".
 * The reason for this initialization is because the last member of the union
 * to be initialized was price, and since the union only holds the value of one
 * member at a time, which happens to be the last member assigned a value,
 * all members will the hold the same value if printed after.
 */

