#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: a pointer to the hash table
 * @key: key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx, i;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	idx = key_index((unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
		if (ht->array[i]->next != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (strcmp(temp->key, key) == 0)
					return(temp->value);
				temp = temp->next;
			}
		}
	}
	return (NULL);
}
