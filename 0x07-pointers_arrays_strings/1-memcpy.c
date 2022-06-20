#include "main.h"
#include <stddef.h>
/**
 * _memcpy - copy n bytes from dest to src
 * @dest: firts argument
 * @src: second argument
 * @n: third argument
 *
 * Description: return thr required result
 *
 * Return: return a char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *_dest = dest;

	for (i = 0; i < n; i++)
	{
		*_dest++ = src[i];
	}
	*_dest = '\0';
	return (0);
}
