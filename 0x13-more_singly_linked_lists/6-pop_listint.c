#include "lists.h"
/**
 * pop_listint - delete the head node of listint_t linked list
 * @head: address of the head pointer
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
int pop_listint(listint_t **head)
{
	listint_t *dir = *head;
	int i;

	if (head == NULL)
		return (0);
	if (*head)
	{
		i = dir->n;
		*head = dir->next;
		free(dir);
	} else
		i = 0;
	return (i);
}
