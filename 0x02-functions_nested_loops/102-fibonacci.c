#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: always 0
*/
int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 2;
	c = 3;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (d = 3; d < 50; d++)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", c);
	return (0);
}
