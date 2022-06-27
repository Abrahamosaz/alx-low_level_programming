#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a given allocation of memory
 * @str: string pointer
 *
 * Description: return the required result
 *
 * Return: return pointer
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int i, j;

	j = 0;
	while (str[j] != '\0')
		j++;
	j++;
	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(j * sizeof(*str));

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

