#include <unistd.h>
/**
 * main - help to print out chatacters
 *
 * Description: print out the required results
 *
 * Return: Always return 0
 *
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
