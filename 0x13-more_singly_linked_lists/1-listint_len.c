#include "lists.h"

/**
* listint_len -count the number of elements given on the list
* @h: points to the header
* Return: number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
	return (0);
	for (counter = 0; h != NULL; counter++)
{
	h = h->next;
}
	return (counter++);
}
