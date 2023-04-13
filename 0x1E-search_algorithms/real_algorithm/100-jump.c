#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	int start, end, check;

	start = check = 0;
	end = (int) sqrt(size);

	while (array[end] < value && check < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		start = end;
		end = start + (int) sqrt(size);
		if (end > ((int)size - 1))
		{
			check = size;
			end = size - 1;
		}
	}
	

	printf("Value found between indexes [%d] and [%d]\n", start, end);
	while (start <= end)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}
