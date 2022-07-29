#include "hash_tables.h"

/**
 * hash_table_get - gets a value from the hash table
 *
 * @ht: the hash table to look into
 * @key: the associated key
 *
 * Return: the value, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *head;
if (ht == NULL)
return (NULL);
idx = key_index((unsigned char *)key, ht->size);
if (ht->array[idx] == NULL)
{
return (NULL);
}
else
{
head = ht->array[idx];
while (head != NULL)
{
if (strcmp(key, head->key) == 0)
return (head->value);
head = head->next;
}
}
return (NULL);
}
