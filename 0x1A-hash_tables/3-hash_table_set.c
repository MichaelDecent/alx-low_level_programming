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
	unsigned int index, i;
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

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		free(key_copy);
		return (1);
	}
	new->key = key_copy;
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

