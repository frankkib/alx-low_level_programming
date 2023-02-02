#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the table
 * Return: If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int num;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	ht->size = size;
	for (num = 0; num < size; num++)
		ht->array[num] = NULL;
	return (ht);
}
