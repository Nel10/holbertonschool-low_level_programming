#include "hash_tables.h"

/**
 * key_index -function that gives you the index of a key
 * @key: key
 * @size: is the size of the array
 * Return: key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int c;

	c = hash_djb2(key) % size;

	return (c);
}
