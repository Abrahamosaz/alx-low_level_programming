#include "main.h"
/**
 * _puts_recursion - print out the string
 * @s: Argument to the function
 *
 * Description: return the required result
 *
 * Return: return void
 */
void _puts_recursion(char *s)
{
	char *ptr = s;

	if (*ptr == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*ptr);
	_puts_recursion(++ptr);
}
