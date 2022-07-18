#include "lists.h"
/**
 * listint_len - return the number of element in a linked list
 * @h: pointe to struct
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *dir = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (dir != NULL)
	{
		count++;
		dir = dir->next;
	}
	return (count);
}
