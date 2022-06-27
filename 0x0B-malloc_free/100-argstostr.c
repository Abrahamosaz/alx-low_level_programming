#include <stdlib.h>
/**
 * argstostr - concantenate all the argument of a program
 * @ac: argument count
 * @av: argument  values
 *
 * Description: return the required result
 *
 * Return: return char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, count = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	/**
	 * count the number of char in each string of argument
	 * pass to the program
	 */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	count++;
	/**
	 * Allocating memory for the total number of char
	 * and new line for each words
	 */
	ptr = (char *)malloc(count * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	i = 0;
	for ( ; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
