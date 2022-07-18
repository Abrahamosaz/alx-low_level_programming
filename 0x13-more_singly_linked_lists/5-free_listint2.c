#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: address of the head pointer
 *
 * Description: free the required memories
 *
 * Return: return void
 */
void free_listint2(listint_t **head)
{
	listint_t *free_nodes = NULL;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free_nodes = *head;
		*head = (*head)->next;
		free(free_nodes);
	}
	*head = NULL;
}
