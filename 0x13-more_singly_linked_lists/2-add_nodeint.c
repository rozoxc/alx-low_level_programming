#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head of list_t
 * @n: integers to be added to new node
 * Return: address of new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *new_node;

	new_node  = malloc(sizeof(struct listint_s));
	if (!new_node || !head)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
