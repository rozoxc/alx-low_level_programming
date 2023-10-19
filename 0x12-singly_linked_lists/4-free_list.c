#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to head of list_t
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *T;

	while (head)
	{
		T = head;
		head = head->next;
		free(T->str);
		free(T);
	}
}
