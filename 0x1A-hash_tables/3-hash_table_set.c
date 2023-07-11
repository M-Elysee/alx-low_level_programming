#include "hash_tables.h"
/**
* hash_table_set - Add or update an element in a hash table.
* @ht: points to a given hash table
* @key: The key of the value to be added in the table
* @value: The value of the key.
* Return: 0 on failure and 1 on success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;
	char *val;
	unsigned long int index, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (j = index; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = val;
			return (1);
		}
	}

	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
	{
		free(val);
		return (0);
	}
	head->key = strdup(key);
	if (head->key == NULL)
	{
		free(head);
		return (0);
	}
	head->value = val;
	head->next = ht->array[index];
	ht->array[index] = head;

	return (1);
}
