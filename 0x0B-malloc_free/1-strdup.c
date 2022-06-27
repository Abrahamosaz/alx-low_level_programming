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
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}
