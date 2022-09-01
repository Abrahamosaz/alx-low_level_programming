#include "lists.h"
/**
 * free_dlistint - free the linked list
 * @head: head pointer of the list
 *
 * Return: return void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *dir = head, *temp = dir;

	while (dir)
	{
		dir = dir->next;
		free(temp);
		temp = dir;
	}
}
