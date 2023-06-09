#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key
 * @key: the key of the hash table
 * @size: the size of the hash table
 *
 * Return: he index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
