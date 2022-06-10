#include <stdio.h>
/**
 * main - print out numbers from 1 to 100 with logic
 * Return: return integer value
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		} else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		} else
		{
			printf("%d", i);
		}
		if (i < 100)
			printf("%c", ' ');
	}
	printf("%c", '\n');
	return (0);
}
