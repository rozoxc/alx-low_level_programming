#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 *  @h: the noude
 * Return: return the number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
