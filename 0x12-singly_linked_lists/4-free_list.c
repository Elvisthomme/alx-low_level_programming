#include "lists.h"

/**
  * free_list - free a list_t
  * @head: a poiter to the head pointer
  */
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}
