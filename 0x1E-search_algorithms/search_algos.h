#ifndef SEARCH_ALGO
#define SEARCH_ALGO

/**  header files */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

/** prototype function declaration */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
