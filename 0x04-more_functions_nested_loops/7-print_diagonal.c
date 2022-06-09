#include "main.h"
/**
 * print_diagonal - print out diagonal shape
 * @n: argument for the function
 *
 * Description: print out the required result
 *
 * Return: return void
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				} else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	} else if (n <= 0)
		_putchar('\n');
}
