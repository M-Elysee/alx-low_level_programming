#include "hash_tables.h"
/**
* hash_table_print - Prints a hash table.
* @ht: points to the hash table to be printed.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int j;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (flag == 1)
				printf(", ");

			head = ht->array[j];
			while (head != NULL)
			{
				printf("'%s': '%s'", head->key, head->value);
				head = head->next;
				if (head != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
