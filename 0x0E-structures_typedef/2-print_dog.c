#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the element of struct dog
 * @d: pointer to the struct dog
 *
 * Description: print the required result
 *
 * Return: return void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	} else
	{
		if (d->name == NULL)
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
