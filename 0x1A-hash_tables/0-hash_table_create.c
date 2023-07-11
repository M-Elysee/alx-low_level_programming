#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: is the size of the array in the table
* Return: a pointer to the new created table or NULL on error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	if (size <= 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
		return (NULL);
	for (j = 0; j < ht->size; j++)
	{
		ht->array[j] = NULL;
	}
	return (ht);
}
