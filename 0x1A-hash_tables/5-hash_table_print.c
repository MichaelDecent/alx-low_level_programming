#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: a pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		printf("{}");
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
			node = ht->array[i];
			if (node->next != NULL)
			{
				while (node)
				{
					printf("'%s': '%s', ", node->key, node->value);
					node = node->next;
				}
			}
		}
	}
	printf("}\n");
}
