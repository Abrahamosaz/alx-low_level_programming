#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: string separator
 * @n: total number of argument
 *
 * Description: return the required result
 *
 * Return: return void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;
	char *ptr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr == NULL)
			printf("%s", "(nil)");
		if (separator == NULL)
		{
			printf("%s", ptr);
		} else
		{
			printf("%s", ptr);
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("%c", '\n');
	va_end(args);
}
