#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - Prints the contents of a hash table.
* @ht: A pointer to the hash table.
*
* Description: This function prints the key-value pairs in the order they
* appear in the array of the hash table. The format of the output is
* '{' key1: value1, key2: value2, ... '}'. If ht is NULL, nothing is printed.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	int comma_flag = 0;

	/* Check for NULL hash table */
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		/* Check if the current array element is not NULL */
		if (ht->array[i] != NULL)
		{
			/* Print comma and space if a previous pair was printed */
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				/* Print the key-value pair */
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				/* Print comma and space if another pair exists */
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1; /* Set the flag to indicate a pair has been printed */
		}
	}
	printf("}\n");
}
