#include <stdlib.h>
#include "lists.h"
/**
 * list_len - return the length of the element in linked list
 * @h: address of the first linked list
 *
 * Description: return the required result
 *
 * Return: return the length
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t len = 0;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
