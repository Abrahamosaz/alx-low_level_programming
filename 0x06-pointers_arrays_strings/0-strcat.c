#include "main.h"
/**
 * _strcat - append string to some other string
 * @dest: first argument
 * @src: second argument
 *
 * Description: return the required result
 *
 * Return: rerutn a char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
