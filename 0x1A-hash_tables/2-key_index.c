#include "hash_tables.h"

/**
* key_index - Get the index of a key in the hash table.
* @key: The key for which the index is calculated.
* @size: The size of the array in the hash table.
*
* Return: The index at which the key should be stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	/* Calculate hash code using hash_djb2 function */
	hash_code = hash_djb2(key);

	/* Calculate index using hash code and table size */
	return (hash_code % size);
}
