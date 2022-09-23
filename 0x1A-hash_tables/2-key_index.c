#include "hash_tables.h"
/**
 * key_index - get the key hash code for the hash table
 * @key: the key word that need hash code for the hash table
 * @size: size of the hash table
 *
 * Return: return the hash code of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
