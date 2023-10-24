#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list_t list
 * @h: pointer to head of list_t
 *
 * Return: number of elements in list_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
