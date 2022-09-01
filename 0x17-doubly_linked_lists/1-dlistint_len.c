#include "lists.h"
/**
 * dlistint_len - return the length of the linked list
 * @h: head pointer
 *
 * Return: return the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *dir = h;
	size_t count = 0;

	if (!h)
		return (0);
	while (dir)
	{
		++count;
		dir = dir->next;
	}
	return (count);
}
