#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - print a character
 * @list: argument of va_list datatype
 *
 * Return: return void
 */
void print_c(va_list list)
{
	int c;

	c = va_arg(list, int);
	printf("%c", c);
}
/**
 * print_int - print a integer
 * @list: argument of va_list datatype
 *
 * Return: return void
 */
void print_int(va_list list)
{
	int c;

	c = va_arg(list, int);
	printf("%d", c);
}
/**
 * print_f - print a float
 * @list: argument of va_list datatype
 *
 * Return: return void
 */
void print_f(va_list list)
{
	double c;

	c = va_arg(list, double);
	printf("%f", c);
}
/**
 * print_s - print a string
 * @list: argument of va_list datatype
 *
 * Return: return void
 */
void print_s(va_list list)
{
	char *c;

	c = va_arg(list, char *);
	if (c == NULL)
		printf("%s", "(nill)");
	printf("%s", c);
}

