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
	char *new_string = NULL;

	if (head == NULL || str == NULL)
		return (NULL);
	/* calculate the length of the string */
	while (str[len] != '\0')
		len++;
	/* Allocating memory to duplicate the string */
	new_string = malloc(sizeof(char) * len);
	if (new_string == NULL)
		return (NULL);
	new_string = strdup(str);
	/* allocating memory for linked list to be added to the beginning */
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(new_string);
		return (NULL);
	}
	ptr->len = len;
	ptr->str = new_string;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
