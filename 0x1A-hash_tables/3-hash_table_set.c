#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_hash;
	char *value_dup, *key_dup;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	key_dup = strdup(key);
	value_dup = strdup(value);
	if (value_dup == NULL || key_dup == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
		return (0);
	new_hash->key = key_dup;
	new_hash->value = value_dup;
	new_hash->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_hash;
		return (1);
	}
	new_hash->next = ht->array[idx];
	ht->array[idx] = new_hash;
	return (1);
}
