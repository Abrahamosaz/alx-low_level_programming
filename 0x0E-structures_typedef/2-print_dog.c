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
	} else if (d->name == NULL || d->age == 0 || d->owner == NULL)
	{
		printf("%s\n", "nill");
	} else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
