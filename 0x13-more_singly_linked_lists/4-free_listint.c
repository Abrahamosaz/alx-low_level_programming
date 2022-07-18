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
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
