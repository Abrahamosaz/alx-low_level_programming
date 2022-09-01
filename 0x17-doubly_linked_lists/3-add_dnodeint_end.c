#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: pointer to the head pointer
 * @n: value to add
 *
 * Return: return the new node otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *dir = *head, *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head && !*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (dir->next)
		dir = dir->next;
	dir->next = new;
	new->prev =  dir;
	return (new);
}
