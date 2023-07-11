#include "hash_tables.h"
/**
* hash_table_get - Retrieve the value of a given key in a table.
* @ht: points to the hash table.
* @key: The key associated with a value in the table
* Return: the key 's value otherwise NUll
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	head = ht->array[i];
	while (head && strcmp(head->key, key) != 0)
		head = head->next;
	return ((head == NULL) ? NULL : head->value);
}
