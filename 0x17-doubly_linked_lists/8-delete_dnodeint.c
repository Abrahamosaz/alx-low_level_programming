#include "lists.h"
/**
 * delete_dnodeint_at_index - delete nodes at index
 * @head: head pointer
 * @index: index value
 *
 * Return: return 1 on success 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dir = *head, *temp = NULL;
	unsigned int index_count = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		temp = dir;
		if (dir->next)
		{
			*head = dir->next;
			free(temp);
			(*head)->prev = NULL;
		} else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	while (dir)
	{
		if (index_count == index)
		{
			temp = dir;
			dir->prev->next = dir->next;
			free(temp);
			return (1);
		}
		index_count++;
		dir = dir->next;
	}
	return (-1);
}
