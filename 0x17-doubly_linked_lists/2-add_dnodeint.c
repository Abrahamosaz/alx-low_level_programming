#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of the linked list
 * @head: pointer to the pointer of the head pointer
 * @n: value to add
 *
 * Return: return the new  list on success otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
