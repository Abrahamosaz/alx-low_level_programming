#ifndef CALC_H
#define CALC_H
/**
 * struct op - operation to the performed by the program
 * @op: string pointer
 * @f: pointer to functions
 *
 * Description: return the required result
 *
 * Return: return;
 */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

int (*get_op_func(char *s))(int, int);

int op_add(int, int);

int op_sub(int, int);

int op_div(int, int);

int op_mod(int, int);

int op_mul(int, int);

#endif

