#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add to the beginning of linked list
 * @head: head pointer
 * @str: const string
 *
 * Description: return the required result
 *
 * Return: return a pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	size_t len = 0;

	if (head == NULL && str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	while (ptr->str[len] != '\0')
		len++;
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
