#include "lists.h"

/**
  * listint_len - compute the number elements of a listint_t
  * @h: the head of the listint_t
  * Return: the number of elements in a listint_t
  */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = (*h).next;
	}
	return (c);
}
