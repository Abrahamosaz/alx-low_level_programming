#include "lists.h"
/**
 * free_listint - free a listint_t linked list
 * @head: pointer to the first element
 *
 * Description: free the required memories
 *
 * Return: return void
 */
void free_listint(listint_t *head)
{
	listint_t *free_nodes = NULL;
	
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free_nodes = head;
		free(free_nodes);
		head = free_nodes->next;
	}
}
