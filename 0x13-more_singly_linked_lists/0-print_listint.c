#include "lists.h"

/**
  * print_listint - print all the element of a listint_t
  * @h: the head of the listint_t
  * Return: the number of printed element
  */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	if (!h)
		return (c);
	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = (*h).next;
	}
	return (c);
}
