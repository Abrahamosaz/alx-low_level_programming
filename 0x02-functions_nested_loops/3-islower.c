#include "main.h"
#include <ctype.h>
/**
 * _islower: to check for lower case
 *
 * Description: return the required results
 *
 * Return: return the integer 0
 */
int _islower(int c)
{
	char check;

	check = tolower(c);
	if (c == check)
	{
		return (1);
	} else 
	{
		return (0);
	}
}
