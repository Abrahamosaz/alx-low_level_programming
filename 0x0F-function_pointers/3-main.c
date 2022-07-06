#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - cal the given operation passed
 * @argc: argument count
 * @argv: arguments passed to the program
 *
 * Description: return the required result
 *
 * Return: return integer value 0
 */
int main(int argc, char *argv[])
{
	op_t ptr;
	int x;
	int y;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	ptr.f = get_op_func(argv[2]);
	if (ptr.f == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	result = ptr.f(x, y);
	if (result == 0)
	{
		printf("Error\n");
		exit (100);
	} else
	{
		printf("%d\n", result);
	}
	return (0);
}
