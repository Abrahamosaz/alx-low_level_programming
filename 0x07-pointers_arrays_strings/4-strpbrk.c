#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strpbrk - search a string for any sets of bytes
 * @s: first argument
 * @accept: second argument
 *
 * Description: return the required result
 *
 * Return: return char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len_s, len_acc;
	char *ptr = NULL;

	len_s = strlen(s);
	len_acc = strlen(accept);

	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_acc; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}


		}
	}
	return (NULL);
}
