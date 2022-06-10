#include "main.h"
/**
 * print_number - print out numbers
 * @n: argument
 *
 * Description: print out thr required rrsult
 *
 * Return: return void
 * 
 */
void print_number(int n)
{
	if (n < 10)
		_putchar(n + '0');
	else if (n >= 10 && < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	} else if (n >= 100 && < 1000)
	{
		_putchar(((n / 100)) / 10 + '0');
		_putchar(
	}
}
