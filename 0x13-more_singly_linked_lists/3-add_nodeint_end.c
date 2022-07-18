#include "lists.h"
/**
 * add_nodeint_end - add node to the end
 * @head: pointer to the first element
 * @n: data
 *
 * Description: return the required result
 *
 * Return: return a pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *dir = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	dir = *head;
	while (dir->next != NULL)
		dir = dir->next;
	dir->next = new_node;
	return (*head);
}
