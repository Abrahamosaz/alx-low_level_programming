#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: string to be print between numbers
 * @n: total number of argument passed to the function
 *
 * Description: return the required result
 *
 * Return: return void
 */ 
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		if (separator == NULL)
			return;
		printf("%d", va_arg(args, unsigned int));
		if (i < n)
			printf("%s", separator);
	}
	printf("%c", '\n');
	va_end(args);
}
