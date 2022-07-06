#include <stdio.h>
/**
 * int_index - get the first index for a given condition
 * @array: first argument
 * @size: size of the array
 * @cmp: perform the condition check on the array
 *
 * Description: return the required result
 *
 * Return: return integr value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
