#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two string
 * @s1: string 1
 * @s2: string 2
 *
 * Description: return the required result
 *
 * Return: retunr char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len_1, len_2, i, j;
	char *ptr = NULL;

	len_1 = strlen(s1);
	len_2 = strlen(s1);
	ptr = (char *)malloc((len_1 + len_2 + 1)  * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

