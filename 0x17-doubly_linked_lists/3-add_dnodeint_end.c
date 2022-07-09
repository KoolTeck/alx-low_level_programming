#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of doubly list
 * @head: the head node
 * @n: the int data to add
 *
 * Return: the new node address or NULL on error
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;
temp = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
new->prev = temp;
return (new);
}
