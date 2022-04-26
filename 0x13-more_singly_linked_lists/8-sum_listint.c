#include "lists.h"

/**
  * sum_listint - compute the sum of elements of a listint_t
  * @head: the head of the listint_t
  * Return: the number of elements in a listint_t
  */
int sum_listint(listint_t *head)
{
	int c = 0;

	while (head)
	{
		c += head->n;
		head = (*head).next;
	}
	return (c);
}
