#include "main.h"
/**
 * _strncat - concatenate two string
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 *
 * Description: return the required result
 *
 * Return: return char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
