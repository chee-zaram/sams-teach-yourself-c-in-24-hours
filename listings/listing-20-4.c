#include <stdio.h>

union u
{
	char ch[2];
	int num;
};

int UnionInitialize(union u val);

int main(void)
{
	union u val;
	int x;

	x = UnionInitialize(val);

	printf("The two characters held by the union:\n");
	printf("%c\n", x & 0x00FF);
	printf("%c\n", x >> 8);

	return (0);
}
/* function definition */
int UnionInitialize(union u val)
{
	val.ch[0] = 'H';
	val.ch[1] = 'i';

	return val.num;
}

