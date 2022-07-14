#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 */
void free_list(list_t *head)
{
	list_t *crr, *nxt;

	crr = head;
	if (head == NULL)
		return;
	while (crr != NULL)
	{
		nxt = crr->next;
		free(crr->str);
		free(crr);
		crr = nxt;
	}
}
