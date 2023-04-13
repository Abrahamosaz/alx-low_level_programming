#include "search_algos.h"
/**
  * binary_search - binary search algorithm
  * @array: pointer to first element in array
  * @size: size of the array
  * @value: value to find
  *
  * Return: index where found or -1
  */
int binary_search(int *array, size_t size, int value)
{
	int  left, right, pivot;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		pivot = (left + right) / 2;
		if (array[pivot] > value)
			right = pivot - 1;
		else if (array[pivot] < value)
			left = pivot + 1;
		else
			return (pivot);
	}
	return (-1);
}

/**
  * print_array - print array
  * @array:  sub array to print
  * @left: starting index in the array
  * @right: ending index in the array
  */

void print_array(int *array, int left, int right)
{
	int i;
	char buffer[] = "Searching in array: ";

	write(1, buffer, 21);
	for (i = left; i < right; i++)
	{
		putchar(array[i] + 48);
		putchar(',');
		putchar(' ');
	}
	putchar(array[i] + 48);
}
