#include "hash_tables.h"
/**
 * hash_table_print -  a function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			while (ht->array[i])
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				if (ht->array[i] != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
