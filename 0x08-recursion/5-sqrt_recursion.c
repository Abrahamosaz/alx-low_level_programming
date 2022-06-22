#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - return the natural sqaure root of a number
 * @n: argument to the function
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
int _sqrt_recursion(int n)
{
	int x;

	x = sqrt(n);
	if (n != x * x)
		return (-1);
	
}
