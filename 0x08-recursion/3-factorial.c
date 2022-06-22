#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: argument to the function
 *
 * Description: return the required result
 *
 * Return: return intege value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
