#include "lists.h"
/**
 * sum_listint - sum of all the data of linked list
 * @head: pointer to the first element
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
int sum_listint(listint_t *head)
{
	listint_t *dir = head;
	size_t total = 0;

	if (head == NULL)
		return (0);
	while (dir)
	{
		total += dir->n;
		dir = dir->next;
	}
	return (total);
}
