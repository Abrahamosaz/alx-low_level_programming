#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the pointer to the memory allocated
 * @d: pointer to struct dog
 *
 * Description: free the pointer and memory from the heep
 *
 * Return: return void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
