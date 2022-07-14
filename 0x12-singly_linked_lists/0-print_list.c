#include <stdlib.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		} else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
