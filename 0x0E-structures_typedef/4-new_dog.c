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
	size_t len_name, len_owner, i, size;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	len_name = len_owner = 0;
	while (name[len_name++] != '\0')
		;
	while (owner[len_owner++] != '\0')
		;
	ptr->name = malloc(len_name * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	size = i = 0;
	while (size++ < len_name)
		ptr->name[size] = name[size];
	ptr->name[size] = '\0';
	ptr->age = age;
	ptr->owner = malloc(len_owner * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	while (i++ < len_owner)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	return (ptr);
}
