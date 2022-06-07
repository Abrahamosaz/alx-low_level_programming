#include "main.h"
/**
 *main - print out the characters
 *
 * Description: return the required results
 *
 * Return: return integer value 0
 *
 */
int main(void)
{
	int n = 0;
	char name[8] = "_putchar";

	while (n < 8)
	{
		_putchar(name[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
