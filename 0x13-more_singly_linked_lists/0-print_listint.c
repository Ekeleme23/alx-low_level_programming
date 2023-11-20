#include "lists.h"

/**
* print_listint - print the data in a single linked list
*
* @h: the head pointer to the list
* Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t counter = 0;

while (h)
{
printf("%d\n", h->n);
counter++;
h = h->next;
}

return (counter);
}
