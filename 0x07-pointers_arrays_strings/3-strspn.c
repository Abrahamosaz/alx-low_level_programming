#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - get the length of prefix substring
 * @s: first argument
 * @accept: second argument
 *
 * Description: return the required result
 *
 * Return: return a unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, max = 0;
	unsigned int i, j, count, len;

	len = strlen(accept);

	while (*s++ != ',')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				x = sizeof(*s);
				max += 1;
			}
		}
	}
	return (max);
}
