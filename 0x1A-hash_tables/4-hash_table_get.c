#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value associated with a key in a hash table.
* @ht: A pointer to the hash table.
* @key: The key to look up in the hash table.
*
* Return: The value associated with the element, or NULL if the key
*         couldn't be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	/* Check for NULL pointers */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* Calculate the hash index */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index */
	node = ht->array[index];
	while (node)
	{
		/* Check if the current node's key matches the desired key */
		if (strcmp(node->key, key) == 0)
			return (node->value);

		/* Move to the next node in the linked list */
		node = node->next;
	}

	/* Key not found */
	return (NULL);
}
