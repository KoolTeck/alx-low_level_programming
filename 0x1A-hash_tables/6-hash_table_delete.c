#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the table to delete
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *temp;
i = 0;
if (ht == NULL)
return;
while (i < ht->size)
{
node = ht->array[i];
while (node != NULL)
{
temp = node->next;
free(node->key);
free(node->value);
free(node);
node = temp;
}
i++;
}
free(ht->array);
free(ht);
}
