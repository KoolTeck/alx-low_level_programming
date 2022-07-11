#include "lists.h"


/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: the head node
 * @index: the index of the node to get
 *
 * Return: the node if found, NULL  if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int i;
current = head;
i = 0;
while (current != NULL)
{
if (i == index)
return (current);
current = current->next;
i++;
}
if (i == index)
return (current);
return (NULL);
}
