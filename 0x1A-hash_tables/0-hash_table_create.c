#include "hash_tables.h"

/**
 * hash_table_create - function of create hash table
 * @size: size of hash table
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	i = 0;
	for (; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
