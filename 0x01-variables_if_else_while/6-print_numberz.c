#include <stdio.h>
/**
 *main - print digit from 1 to 10
 *
 * Description: return the results from a for loop
 *
 * Return: return integer value  0
 *
 */
int main(void)
{
	int start = 0;

	for (start = 0; start < 10; start++)
	{
		putchar(start + '0');
	}
	putchar('\n');
	return (0);
}
