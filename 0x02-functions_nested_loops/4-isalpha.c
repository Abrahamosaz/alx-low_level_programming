#include "main.h"
#include <ctype.h>
/**
 * _isalpha - To check for alphabetical characters
 * @c: value to be checked by the funtion
 *
 * Description: return the required results
 *
 * Return: return the integer value 0
 *
 */
int _isalpha(int c)
{
	int check;

	check = isalpha(c);

	if (check != 0)
	{
		return (1);
	}
	if (check == 0)
	{
		return (0);
	}
	return (0);
}
