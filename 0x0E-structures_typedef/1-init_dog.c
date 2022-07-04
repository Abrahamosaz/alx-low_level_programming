#include "dog.h"
/**
 * init_dog - initialize value for the struct dog
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Descriprion: initialize the value of the struct members
 *
 * Return: return void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
