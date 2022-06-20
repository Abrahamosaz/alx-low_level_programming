#include "main.h"
#include <stddef.h>
/**
 * _strchr - return the first occurrence to the string s
 * @s: first argument
 * @c: second argument
 *
 * Description: return the required result
 *
 * Return: return a char pointer
 */
char *_strchr(char *s, char c)
{
	char *src = s;

	while (*src != c)
	{
		src++;
	}
	return (src);
	if (*src != c)
		return (NULL);
}
