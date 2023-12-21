#include "hash_tables.h"
/**
 * hash_table_create - Create a new hash table.
 * @size: The size of the hash table.
 *
 * Description:
 * This function creates a new hash table with a specified size.
 * It allocates memory for the hash table structure and the array
 * of linked lists (buckets). Each element in the array is initialized
 * to NULL, representing an empty linked list.
 *
 * Return:
 * If successful, it returns a pointer to the newly created hash table.
 * If memory allocation fails, the function prints an error message and
 * exits the program.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		perror("Allocation failed");
		exit(EXIT_FAILURE);
	}
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		perror("Memory allocation failed");
		free(new_table);
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < size; i++)

	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
