#include "main.h"
/**
 * rev_string - print string in reverse
 * @s: pointer argument
 *
 * Description: return the required result
 *
 * Return: return void
 *
 */
void rev_string(char *s)
{
	int count, c = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		c++;
	}
	for (count = c - 1; count >= 0; count--)
		s[count];
}
