#include "hash_tables.h"
/**
 * hash_table_print - print value from the hash table
 * @ht: hash table
 *
 * Return: return void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t **ht_table = NULL, *temp = NULL;
	int flag = 0;

	if (!ht)
		return;
	ht_table = ht->array;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht_table[index];
		while (temp)
		{
			if (flag)
				printf(", ");
			printf("%s: %s", temp->key,
					temp->value);
			flag++;
			temp = temp->next;
		}
	}
	printf("}\n");
}
