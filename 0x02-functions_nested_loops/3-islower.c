#include "main.h"
#include <ctype.h>
/**
 *_islower - to check for lower case of int c
 *@c: value to be check for by the function
 *
 *Description: (int c) use to check the required results
 *
 *Return: return the integer 0
 */
int _islower(int c)
{
	char check;

	check = tolower(c);
	if (c != check || c == 0 || c == 20)
	{
		return (0);
	}
	if (c == check)
	{
		return (1);
	}

	return (0);
}
