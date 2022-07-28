#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the array to create
 * Return: a pointer to new table or null on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int idx;

if (size < 1)
{
return (NULL);
}
ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
return (NULL);
ht->array = malloc(sizeof(hash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}
ht->size = size;
idx = 0;
while (idx < size)
{
ht->array[idx] = NULL;
idx++;
}
return (ht);
}
