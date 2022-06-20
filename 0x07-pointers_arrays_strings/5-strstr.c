#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: first argument
 * @needle: second argument
 *
 * Description: return the required result
 *
 * Return: return a char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
