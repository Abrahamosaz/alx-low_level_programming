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
	listint_t *dir = *head, *new_node = NULL, *temp = NULL;
	size_t i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	for (i = 0; i < idx - 1; i++)
	{
		if (dir->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		dir = dir->next;
	}
	temp = dir;
	dir = dir->next;
	new_node->next = dir;
	temp->next = new_node;
	return (temp->next);
}
