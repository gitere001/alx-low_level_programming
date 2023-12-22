#include "hash_tables.h"
/**
* hash_table_delete - Deletes a hash table.
* @ht: A pointer to the hash table.
*
* Description: This function frees the memory allocated for a hash table,
* including the keys, values, and nodes.
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	/* Iterate through each index in the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		/* Check if the current array element is not NULL */
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				/* Free the key, value, and node */
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}

	/* Free the array and the hash table structure */
	free(head->array);
	free(head);
}
