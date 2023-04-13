#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, size_t start, size_t end);
/**
 * binary_search - search for value using binary search algorithm
 * @array: list of array to search on
 * @size: size of the array
 * @value: target value to search for
 *
 * Return: return the index of the target value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left_index, right_index, middle_index;


	left_index = 0;
	right_index = size - 1;
	if (!array)
		return (-1);

	while (left_index <= right_index)
	{
		middle_index = left_index + (right_index - left_index) / 2;
		printf("Searching in array: ");
		print_array(array, left_index, right_index);
		if (array[middle_index] < value)
		{
			left_index = middle_index + 1;
		} else if (array[middle_index] > value)
		{
			right_index = middle_index - 1;
		} else
			return (middle_index);
	}

	return (-1);
}
/**
 * print_array - print the element of the array
 * @array: array to print
 * @start: start index of the part of the array to print
 * @end: end index of the array to print
 *
 * Return: return void
 */
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

