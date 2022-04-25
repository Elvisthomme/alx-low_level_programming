#include "lists.h"

/**
  * add_nodeint_end - add a new node at the end of a listint_t
  * @head: a poiter to the head pointer
  * @n: the value to add to list_t
  * Return: the pointer to the new element or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *h;

	if (!head)
		return (NULL);
	node = malloc(sizeof(node));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	h = *head;
	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = node;
	}
	else
		*head = node;
	return (node);
}
