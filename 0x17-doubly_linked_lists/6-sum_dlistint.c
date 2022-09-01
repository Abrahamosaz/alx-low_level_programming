#include "lists.h"
/**
 * sum_dlistint - sum of the linked list values
 * @head: head pointer
 *
 * Return: return the sum of the total value
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *dir = head;
	int sum = 0;

	if (!head)
		return (0);
	while (dir)
	{
		sum += dir->n;
		dir = dir->next;
	}
	return (sum);
}
