#include "lists.h"

/**
  * add_node_end - add a new node at the end of a list_t
  * @head: a poiter to the head pointer
  * @str: the string value to add as value to list_t
  * Return: the pointer to the new element or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *h;
	int i = 0;
	char *string;

	if (!head)
		return (NULL);
	string = strdup(str);
	while (*(str + i))
		i++;
	node = malloc(sizeof(node));
	if (!node)
		return (NULL);
	node->str = string;
	node->len = i;
	node->next = NULL;
	h = *head;
	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = node;
	}
	else
		*head = node;
	return (node);
}
