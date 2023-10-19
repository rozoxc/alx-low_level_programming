#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to head of list_t
 * @str: string to be added
 * Return: address of new element, or NULL if it's faulse
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *l;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->len = strlen(str);
	n->str = strdup(str);
	n->next = NULL;
	if (!*head)
		*head = n;
	else
	{
		l = *head;
		while (l->next)
			l = l->next;
		l->next = n;
	}
	return (n);
}
