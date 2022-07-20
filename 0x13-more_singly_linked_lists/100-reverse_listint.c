#include "lists.h"
/**
 * reverse_listint - reverse a listint_t linked list
 * @head: adrdress of the head pointer
 *
 * Description: return the required result
 *
 * Return: return a listint_t pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *prev = NULL;

	if (!head || !*head)
		return (NULL);
	while (*head != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
