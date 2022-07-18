#include "lists.h"
/**
 * add_nodeint - add nodes at the beginning of a linked list
 * @head: pointer to the first element
 * @n: data
 *
 * Description: return the required result
 *
 * Return: return a pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

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
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
