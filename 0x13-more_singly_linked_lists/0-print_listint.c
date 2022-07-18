#include "lists.h"
/**
 * print_listint - print all the elements of a linked list
 * @h: pointer to a struct
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *dir = NULL;
	size_t count = 0;

	dir = h;
	if (dir == NULL)
		return (0);
	while (dir != NULL)
	{
		printf("%d\n", dir->n);
		count++;
		dir = dir->next;
	}
	return (count);
}
