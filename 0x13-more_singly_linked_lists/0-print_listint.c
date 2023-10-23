#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to head of list_t
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d \n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

