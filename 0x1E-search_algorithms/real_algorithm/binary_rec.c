#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

void print_array(int *array, size_t start, size_t end)
{
	size_t index = start;

	while (index < end)
	{
		printf("%d, ", array[index]);
		index++;
	}
	printf("%d\n", array[end]);
}

int binary_rec_search(int *array, int start, int end, int value)
{
	int middle_index;


	if ((end - start) >= 0)
	{
		middle_index =  start + (end - start) / 2;

		printf("Searching in array: ");
		print_array(array, start, end);
		if (middle_index < value)
		{
			return (binary_rec_search(array, middle_index + 1, end, value));
		} else if (middle_index > value)
		{
			return (binary_rec_search(array, start, middle_index - 1, value));
		} else
			return (middle_index);
	}

	return (-1);
}

int binary_search(int *array, size_t size, int value)
{
	return  (binary_rec_search(array, 0, size - 1, value));
}
