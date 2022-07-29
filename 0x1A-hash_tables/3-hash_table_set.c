#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add element into
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on succes, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
hash_node_t *current;
unsigned long int index;

if (key[0] == '\0' || key == NULL || ht == NULL || value == NULL)
return (0);
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
new->key = (char *)key;
new->value = _strdup(value);
new->next = NULL;
index = key_index((unsigned char *)key, ht->size);
if (ht->array[index] == NULL)
{
ht->array[index] = new;
}
else
{
current = ht->array[index];
if (strcmp(key, current->key) == 0)
{
current->value = _strdup(value);
}
else
{

}
}
return (1);
}


/**
 * _strdup - duplicates a string
 * @str: The str to duplicate
 *
 * Return: pointer to the new str
 */

char *_strdup(const char *str)
{
int i, len;
char *s;
if (str == NULL)
{
return (NULL);
}
len = _strlen(str);
s = malloc(sizeof(char) * (len + 1));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
s[i] = str[i];
}
s[i] = '\0';
return (s);
}

/**
 * _strlen - checks the length of a string
 * @str: the string to check
 *
 * Return: the length of the string
 */

int _strlen(const char *str)
{
int len = 0;

while (str[len] != '\0')
{
len++;
}
return (len);
}
