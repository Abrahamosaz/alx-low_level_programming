#include "search_algos.h"

/**
  * linear_search - linear search algorithm
  * @array: pointer to first element of the array
  * @size: size of the array
  * @value: value to find
  *
  * Return: index if found else -1
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
