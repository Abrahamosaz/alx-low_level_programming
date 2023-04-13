#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - search an array for target value
 * @array: array to linearly search
 * @size: size of the array
 * @value: target value to search for
 *
 * Return: return the index of the target value or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
