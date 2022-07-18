#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of linked list
 * @head: pointer to the first element
 * @index: index of the linked list
 *
 * Description: return the required result
 *
 * Return: return pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *dir = head;
	size_t i;

	for (i = 0; i < index; i++)
	{
		if (dir->next == NULL)
			return (NULL);
		dir = dir->next;
	}
	return (dir);
}
