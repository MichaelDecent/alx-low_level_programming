#include "hash_tables.h"
/**
 * hash_table_delete - a function that prints a hash table
 * @ht: a pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp, *node;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
