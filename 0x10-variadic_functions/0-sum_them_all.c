#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum all the argument passed to a function
 * @n: the total number of argument passed
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	size_t i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
