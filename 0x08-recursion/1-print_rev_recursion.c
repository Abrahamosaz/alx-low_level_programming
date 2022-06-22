#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: argumnet to the function
 *
 * Description: return the required result
 *
 * Return: return void
 */
void _print_rev_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	{
		_print_rev_recursion(ptr + 1);
		_putchar(*ptr);
	}

}
