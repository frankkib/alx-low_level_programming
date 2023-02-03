#include "hash_tables.h"
/**
 * hash_table_set - function that adds elements to hash table
 * @ht: the hash table to be added
 * @key: is the key
 * @value: the element that is associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *node;
	char *copy_num;
	unsigned long int num, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy_num = strdup(value);
	if (copy_num == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (num = index; ht->array[num]; num++)
	{
		if (strcmp(ht->array[num]->key, key) == 0)
		{
			free(ht->array[num]->value);
			ht->array[num]->value = copy_num;
			return (1);
		}
	}
	node = malloc(sizeof(hash_table_t));
	if (node == NULL)
	{
		free(copy_num);
		return (0);
	}
	node->value = copy_num;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
