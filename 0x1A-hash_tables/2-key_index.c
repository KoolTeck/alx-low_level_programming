#include "hash_tables.h"

/**
 * key_index - returns the index a key should be stored
 *
 * @key: the key
 * @size: the size of the hash table array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
hash = hash_djb2(key);
return (hash % size);
}
