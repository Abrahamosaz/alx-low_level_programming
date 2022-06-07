#include "main.h"
/**
 * print_alphabet_x10 - print out alphabets 10 times
 *
 * Description: return the required results
 *
 * Return: return void
 */
void print_alphabet_x10(void)
{
	int start;
	char i;

	for (start = 0; start < 10; start++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
