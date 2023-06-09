#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: a pointer the hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if it succeeds and 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new;
	char *key_copy, *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	key_copy = strdup(key);
        if (key_copy == NULL)
                return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index]->key = key_copy;
		ht->array[index]->value = value_copy;
		return(0);
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return(1);
		}
		else
		{
			new = malloc(sizeof(hash_node_t));
			if (new == NULL)
			{
				free(value_copy);
				free(key_copy);
				return (1);
			}
			new->next = ht->array[index];
			ht->array[index] = new;
			return(0);
		}

	}


}

