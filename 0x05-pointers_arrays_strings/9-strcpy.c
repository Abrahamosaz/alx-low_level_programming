#include "main.h"
/**
 * _strcpy - copy the string from one pointer to another 
 * @dest: first argument
 * @src: second argument
 *
 * Description: return the required result
 *
 * Return: return char pointer
 *
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, i;

	while (*src != '\0')
	{
		count++;
		src++;
	}
	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	dest[count] = '\0';
	return (dest);
}
