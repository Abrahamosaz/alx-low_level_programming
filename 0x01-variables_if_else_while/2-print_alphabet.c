#include <stdio.h>
/**
 * main - print out the results from the function
 *
 *Description: use to print alphabet from a to z
 *
 *Return: return integer value o
 *
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
