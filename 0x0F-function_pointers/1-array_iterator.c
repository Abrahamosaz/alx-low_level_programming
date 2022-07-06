#include <stdio.h>
/**
 * array_iterator - print each element in the array
 * @array : first argument
 * @size: size of the array
 * @action: acction to be performed on the array
 *
 * Description: return the required result
 *
 * Return: return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
