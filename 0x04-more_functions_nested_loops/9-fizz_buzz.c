#include "main.h"
/**
 * main - print out numbers from 1 to 100 with logic
 * Return: return integer value
 */
int main(void)
{
int i, j, k, h;
char f_w[] = "Fizz", s_w[] = "Buzz", t_w[] = "FizzBuzz";

for (i = 1; i < 101; i++)
{
if (i == 1)
	_putchar(i + '0');
if (i > 1 && i % 3 == 0 && i % 5 == 0)
{
	_putchar(' ');
	for (h = 0; h < 8; h++)
		_putchar(t_w[h]);
} else if (i > 1 && i % 3 == 0)
{
	_putchar(' ');
	for (j = 0; j < 4; j++)
		_putchar(f_w[j]);
} else if (i > 1 && i % 5 == 0)
{
	_putchar(' ');
	for (k = 0; k < 4; k++)
		_putchar(s_w[k]);
} else
{
	if (i > 1 && i < 10)
	{
		_putchar(' ');
		_putchar(i + '0');
	}
	if (i > 1 && i > 10)
	{
		_putchar(' ');
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
}
}
_putchar('\n');
return (0);
}
