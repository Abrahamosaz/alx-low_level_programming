#include "main.h"
/**
 * set_string - set the value of a pointer to char
 * @s: first argument
 * @to: second argument
 *
 * Description: return the required result
 *
 * Return: return void
 */
void set_string(char **s, char *to)
{
	char ***ptr = &s;

	**ptr = to;
}
