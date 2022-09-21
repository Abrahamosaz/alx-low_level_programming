#include "hash_tables.h"
/**
 * hash_table_delete - free memory allocated for the hash table
 * @ht: hash table address
 *
 * Return: return void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *store = NULL;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			store = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = store;
		}
	}
	free(ht->array);
	free(ht);
}
