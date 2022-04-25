#include "lists.h"

/**
  * add_nodeint - add a new node at the beginning of a listint_t
  * @head: a poiter to the head pointer
  * @n: the value to add to list_t
  * Return: the pointer to the new element or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(node));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
