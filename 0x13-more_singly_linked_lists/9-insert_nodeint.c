#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given index
 * @head: address of the head pointer
 * @idx: index
 * @n: data
 *
 * Description: return the required the result
 *
 * Return: return a pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *dir = *head, *new_node = NULL;
	listint_t *store = NULL;
	size_t i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (!dir)
		{
			free(new_node);
			return (NULL);
		}
		dir = dir->next;
	}
	store = dir;
	new_node->next = dir->next;
	store->next = new_node;
	return (new_node);
}
