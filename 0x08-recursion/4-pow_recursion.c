#include "main.h"
/**
 * _pow_recursion - print the value of x raise to pow y
 * @x: first argument
 * @y: second argument
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return  (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
