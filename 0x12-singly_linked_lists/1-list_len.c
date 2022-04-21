#include "lists.h"

/**
  * list_len - count the number a elements in a linked list_t
  * @h: the head of the list_t
  * Return: the number of elements of the list
  */
size_t list_len(const list_t *h)
{
	int c = 0;

	if (!h)
		return (c);
	while (h)
	{
		c++;
		h = (*h).next;
	}
	return (c);
}
