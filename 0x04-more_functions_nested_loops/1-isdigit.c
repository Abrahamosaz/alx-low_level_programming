#include "main.h"
/**
 * _isdigit - check for digits
 * @c: Argument thet the function will check for
 *
 * Description: print out the required result
 *
 * Return: return integer value
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
