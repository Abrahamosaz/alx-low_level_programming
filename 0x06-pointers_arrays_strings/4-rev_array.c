#include "main.h"
/**
 * reverse_array - reversr the element in array
 * @a: array
 * @n: size of thr element of the array in bytes
 *
 * Description: return the required result
 *
 * Return: return void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int val;

	for (i = 0; i < n--; i++)
	{
		val = a[i];
		a[i] = a[n];
		a[n] = val;
	}

}
