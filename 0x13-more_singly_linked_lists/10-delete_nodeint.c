#include "lists.h"

/**
  * delete_nodeint_at_index - delete the node at the specifier index of a listint_t
  * @head: a pointer to the head pointer
  * @index: the index of the node
  * Returns: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *node;

	h = *head;
	if (head && h)
	{
		if (!index)
		{
			node = h;
			*head = h->next;
			free(node);
			return (1);
		}
		while ((index--) - 1)
		{
			if (h->next)
				h = h->next;
			else
				return (-1);
		}
		node = h->next;
		h->next = node->next;
		free(node);
		return (1);
	}
	else
		return (-1);
}
