#include "hash_tables.h"
/**
 * hash_table_get - get value from the hash table using the key
 * @ht: hash table
 * @key: key use to get the value from the hash table
 *
 * Return: return the value from the hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *value_at_index = NULL, *temp = NULL;

	key_idx = key_index((const unsigned char *)key, ht->size);
	value_at_index = ht->array[key_idx];
	if (!value_at_index)
		return (NULL);
	if (!strcmp((const char *)value_at_index->key, key))
		return (value_at_index->value);
	temp = value_at_index;
	while (temp)
	{
		if (!strcmp((const char *)temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
