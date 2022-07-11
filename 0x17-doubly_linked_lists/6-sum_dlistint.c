#include "lists.h"

/**
 * sum_dlistint - sums the int element of a d list
 * @head: the head list
 *
 * Return: the sum or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (sum);
while  (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
