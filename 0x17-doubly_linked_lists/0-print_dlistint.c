#include "lists.h"
/**
 * print_dlistint - print the values of the linked list
 * @h: head pointer of the  linked list
 *
 * Return: return the count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *dir = h;
	ssize_t count = 0;

	if (!h)
		return (0);
	while (dir)
	{
		printf("%d\n", dir->n);
		count++;
		dir = dir->next;
	}
	return (count);
}
