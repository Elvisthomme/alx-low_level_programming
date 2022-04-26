#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: a poiter to the head pointer
  * Return: head node’s data or NULL if it failed
  */
int pop_listint(listint_t **head)
{
	listint_t *node, *first;
	int n;

	if (!head || !*head)
		return (0);
	first = *head;
	n = first->n;
	node = first->next;
	*head = node;
	free(first);
	return (n);
}
