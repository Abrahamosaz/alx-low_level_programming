#include <stdio.h>

/**
 * main - return integal of 0
 *
 * Description: print the size of diffirent characters and words
 *
 * Return: Always succes return o
 *
 */

int main(void)
{
	printf("Size of a char is: %ld byte(s)", sizeof(char));
	printf("size of an int: %ld bytes(s)", sizeof(int));
	printf("Size of a long int: %ld bytes(s)", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)", sizeof(float));

	return (0);
}
