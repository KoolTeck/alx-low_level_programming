#include "lists.h"

/**
 * add_dnodeint - adds a new node at the top of dlist
 *
 * @head: address of the head node
 * @n: the int data to add
 *
 * Return: Returns the new node or NULL on error
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
