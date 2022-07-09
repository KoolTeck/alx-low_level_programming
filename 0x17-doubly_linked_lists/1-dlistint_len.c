#include "lists.h"

/**
 * dlistint_len - finds the num of elements in a d_list
 *
 * @h: the head node
 *
 * Return: the num of element
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
