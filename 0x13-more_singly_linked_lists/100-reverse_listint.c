#include "lists.h"
/**
  * add_node - add a new node at the beginning of a listint_t
  * @head: a poiter to the head pointer
  * @node: the node to add to list_t
  * Return: the pointer to the new element or NULL if it failed
  */
listint_t *add_node(listint_t **head, listint_t *node)
{
	if (!head)
		return (NULL);
	if (!node)
		return (NULL);
	node->next = *head;
	*head = node;
	return (node);
}

/**
  * reverse_listint - reverse a listint_t
  * @head: a poiter to the head pointer
  * Return: a pointer to first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *hh, *result;

	if (!head)
		return (NULL);
	h = *head;
	*head = NULL;
	while (h)
	{
		hh = h->next;
		h->next = NULL;
		result = add_node(head, h);
		h = hh;
	}
	return (result);
}

