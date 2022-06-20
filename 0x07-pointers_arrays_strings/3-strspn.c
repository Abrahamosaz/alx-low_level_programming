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
	unsigned int i = 0, j = 0, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			len++;
		if (accept[j] == '\0')
			return (len);
	}
	return (len);

}
