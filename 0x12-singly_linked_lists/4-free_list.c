#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free memory allocated for linked list
 * @head: pointer to the fist linked list
 *
 * Description: return the required result
 *
 * Return: return void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	if (head == NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
