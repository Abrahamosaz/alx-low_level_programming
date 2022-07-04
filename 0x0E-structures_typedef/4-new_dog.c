#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - pointer to a new allocated memory
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: return a pointer to a new memory allocated
 *
 * Return: return dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
		return (ptr);
	}
	return (NULL);
}
