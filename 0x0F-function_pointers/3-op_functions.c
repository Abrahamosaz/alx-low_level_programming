#include "3-calc.h"
/**
 * op_add - add two numbers together
 * @a: first  number
 * @b: second number
 * Return: return integer result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract a from  b
 * @a: first number
 * @b: second number
 * Return: return integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: return integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: return integer
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
 * op_mod - find the reminder
 * @a: first number
 * @b: second number
 * Return: return integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
