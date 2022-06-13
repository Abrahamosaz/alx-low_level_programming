#include "main.h"
/**
 * swap_int - swao argument a with b
 * @a: first argument
 * @b: second argument
 *
 * Description: return the required result
 *
 * Return: return void
 *
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
