#include "main.h"
/**
 * main - print alphabets
 *
 * Description: print out the required results from a to z
 *
 * Return: return the integer 0
 *
 */
void main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
