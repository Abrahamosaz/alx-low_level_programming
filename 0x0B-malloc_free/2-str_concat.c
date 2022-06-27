#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two string
 * @s1: string 1
 * @s2: string 2
 *
 * Description: return the required result
 *
 * Return: return char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr = NULL;
	/**
	 * checking for NULL string for both s1 and s2
	 */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/**
	 * count the lengh of string s1 and s2
	 */
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	/**
	 * Allocate memory base on the length of s1 and s2
	 * and plus 1 for NULL character
	 */
	ptr = (char *)malloc((i + j + 1)  * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	/**
	 * concatenating the value of s1 and s2
	 * in memory allocated the pointer ptr
	 */
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
