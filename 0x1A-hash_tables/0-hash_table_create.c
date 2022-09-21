#include "hash_tables.h"
/**
 * hash_table_create - create a new hash_table
 * @size: size of the hash table
 *
 * Return: return address of the new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht_new = NULL;
	hash_node_t **new_hash_table = NULL;
	unsigned long int i;

	ht_new = malloc(sizeof(hash_table_t));
	if (!ht_new)
		return (NULL);
	new_hash_table = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_table)
		return (NULL);
	ht_new->size = size;
	ht_new->array = new_hash_table;
	for (i = 0; i < size; i++)
		ht_new->array[i] = NULL;
	return (ht_new);
}
