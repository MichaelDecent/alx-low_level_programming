#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_node, *temp;
	hash_table_t *head = ht;
	unsigned int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash_node = ht->array[i];
			while (hash_node != NULL)
			{
				temp = hash_node->next;
				free(hash_node->key);
				free(hash_node->value);
				free(hash_node);
				hash_node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
