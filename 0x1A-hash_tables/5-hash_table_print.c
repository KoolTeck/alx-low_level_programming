#include "hash_tables.h"

/**
 * hash_table_print - prints the element in a hash table
 *
 * @ht: the hash table to be printed
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *current_n;
unsigned long int i = 0;
int top = 1;
if (ht != NULL)
{
printf("{");
while (i < ht->size)
{
current_n = ht->array[i];
while (current_n != NULL)
{
if (top)
{
printf("'%s': '%s'", current_n->key, current_n->value);
top = 0;
}
else
{
printf(", '%s': '%s'", current_n->key, current_n->value);
}
current_n = current_n->next;
}
i++;
}
printf("}\n");
}
}
