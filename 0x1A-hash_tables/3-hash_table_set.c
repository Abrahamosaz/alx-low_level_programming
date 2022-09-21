#include "hash_tables.h"
/**
 * add_node - add new node to be store in the hash table
 * @key: key of the hash table
 * @value: value to be stored in the hash table
 *
 * Return: return address of the new node
 */
static
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	char *new_key = NULL, *new_value = NULL;

	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);
	new_key = strdup(key);
	new_value = strdup(value);
	if (!new_key || !new_key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = NULL;
	return (new_node);
}
/**
 * hash_table_set - set the hash table with the key and value
 * @ht: hash table
 * @key: key of the hash code in the hash table
 * @value: value to be stored in the hash table
 *
 * Return: return 1 if succesfull and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int key_idx;
	hash_node_t *new_node = NULL, *temp = NULL;

	if (!ht || !key || !value)
		return (0);
	new_node = add_node(key, value);
	key_idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[key_idx])
	{
		temp = ht->array[key_idx];
		new_node->next = temp;
		ht->array[key_idx] = new_node;
	} else
		ht->array[key_idx] = new_node;
	return (1);
}
