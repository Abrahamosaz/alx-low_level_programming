#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

int sum_them_all(const unsigned int, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
/**
 * struct datatype - the specific datatypoe defined
 * @s: pointer to char
 * @p: pointer to va_list datatype
 *
 * Return: return;
 */
typedef struct datatype
{
	char *s;
	void (*f)(va_list);
} d_t;

void print_c(va_list);
void print_int(va_list);
void print_s(va_list);
void print_f(va_list);
#endif

