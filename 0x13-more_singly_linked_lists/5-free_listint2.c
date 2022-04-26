#include "lists.h"

/**
  * free_listint2 - free a listint_t
  * @head: a poiter to the head pointer
  */
void free_listint2(listint_t **head)
{
	listint_t *h, *next;

	if (head)
	{
		h = *head;
		while (h)
		{
			next = h->next;
			free(h);
			h = next;
		}
		free(head);
	}
}
