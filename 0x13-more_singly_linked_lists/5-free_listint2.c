#include "lists.h"
/**
 * free_Listint2 - free linked list
 * @head: address of the head pointer
 *
 * Description: free the required memories
 *
 * Return: return void
 */
void free_listint2(listint_t **head)
{
	listint_t *free_nodes = NULL;
	listint_t *temp = *head;
	
	if (temp == NULL)
		return;
	while (temp != NULL)
	{
		free_nodes = temp;
		temp = temp->next;
		free(free_nodes);
	}
}
