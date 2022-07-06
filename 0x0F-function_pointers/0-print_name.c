#include <stdio.h>
/**
 * print_name - print a name
 * @name: pointer to a string
 * @f: pointert to a function
 *
 * Dsecription: return the required result
 *
 * Return: return void
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
