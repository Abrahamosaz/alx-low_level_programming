#include "lists.h"
/**
 * get_dnodeint_at_index - get node at particular index
 * @head: head pointer of the linked list
 * @index: index of the list
 * Return: return the address of the list at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *dir = head, *temp = NULL;
	size_t idx = 0;

	if (!head)
		return (NULL);
	while (dir)
	{
		if (idx == index)
			temp = dir;
		idx++;
		dir = dir->next;
	}
	return (temp);
}
