#include "lists.h"

/**
  * print_list - print all the element of a list_t
  * @h: the head of the list_t
  * Return: the number of printed element
  */
size_t print_list(const list_t *h)
{
	int c = 0;

	if (!h)
		return (c);
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		c++;
		h = (*h).next;
	}
	return (c);
}
