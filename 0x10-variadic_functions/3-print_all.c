#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_c - print a character
 * @list: argument of va_list datatype
 * Return: return void
 */
void print_c(va_list list)
{
	int c;

	c = va_arg(list, int);
	printf("%c, ", c);
}
/**
 * print_int - print a integer
 * @list: argument of va_list datatype
 * Return: return void
 */
void print_int(va_list list)
{
	int c;

	c = va_arg(list, int);
	printf("%d, ", c);
}
/**
 * print_f - print a float
 * @list: argument of va_list datatype
 * Return: return void
 */
void print_f(va_list list)
{
	double c;

	c = va_arg(list, double);
	printf("%f, ", c);
}
/**
 * print_s - print a string
 * @list: argument of va_list datatype
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
/**
 * print_all - print anything
 * @format: ponter to char
 *
 * Description: return the required result
 *
 * Return: return void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	size_t i, j;

	d_t var[] = {
		{"c", print_c},
		{"i", print_int},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(args, format);
	i = 0;
	while (var[i].s != NULL)
	{
		j = 0;
		while (format[j] != '\0')
		{
			if (format[j] == *(var[i].s))
			{
				var[i].f(args);
			}
			j++;
		}
		i++;
	}
	printf("%c", '\n');
	va_end(args);
}
