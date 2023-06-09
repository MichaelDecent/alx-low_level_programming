#include "hash_tables.h"
/**
 * create_data - a fuction that create the data to be inserted
 * @key: the key
 * @value: value
 *
 * Return:  a pointer to the data
 */
hash_node_t *create_data(char *key, char *value)
{
	hash_node_t *data;

	data = malloc(sizeof(hash_node_t));
	if (data == NULL)
		return (NULL);
	data->key = malloc(strlen(key) + 1);
	if (data->key)
		return (NULL);
	data->value = malloc(strlen(value) + 1);
	if (data->value == NULL)
		return (NULL);
	strcpy(data->key, key);
	strcpy(data->value, value);

	return (data);
}


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
	
	hash_node_t *data = create_data(key, value);
	index = key_index(key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = data;
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
			data->next = ht->array[index]->next;
			ht->array[index]->next = data; 
		}	return(0);

	}


}

