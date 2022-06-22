#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: argument to the function
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	} else
		return (0);
}
