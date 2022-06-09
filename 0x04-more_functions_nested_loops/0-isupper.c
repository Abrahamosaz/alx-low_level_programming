#include "main.h"
/**
 * _isupper - check if the argument is upper case
 * @c: Argument passed to the function
 *
 * Description: print out thr required result
 *
 * Return: return integer value 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else
		return (0);
}
