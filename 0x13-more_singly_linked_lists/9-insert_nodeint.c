#include "lists.h"

/**
  * get_nodeint_at_index - get the node at the specifier index of a listint_t
  * @head: a pointer to the head pointer
  * @idx: the index of the node
  * @n the node value
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *node;

	h = *head;
	node = malloc(sizeof(*node));
	if (head && h && node)
	{
		node->n = n;
		while (idx && ((idx--) - 1))
		{
			if (h->next)
				h = h->next;
			else
				return (NULL);
		}
		node->next = h->next;
		h->next = node;
		return (node);
	}
	else
		return (NULL);
}
