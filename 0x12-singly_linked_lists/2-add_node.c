#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head of list_t
 * @str: string to be added to new node
 * Return: address of new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->len = strlen(str);
	n->str = strdup(str);
	n->next = *head;
	*head = n;
	return (n);
}
