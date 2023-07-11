#include "hash_tables.h"
/**
* hash_table_delete - Deletes a hash table.
* @ht: points to the hash table to be deleted.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *head, *temp;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			head = ht->array[j];
			while (head != NULL)
			{
				temp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = temp;
			}
		}
	}
	free(hd->array);
	free(hd);
}
