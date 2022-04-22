#include "lists.h"

/**
  * add_node - add a new node at the beginning of a list_t
  * @head: a poiter to the head pointer
  * @str: the string value to add as value to list_t
  * Return: the pointer to the new element or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *string;

	if (!head)
		return (NULL);
	string = strdup(str);
	if (!string)
		return (NULL);
	node = malloc(sizeof(node));
	if (!node)
		return (NULL);
	node->str = string;
	node->next = *head;
	*head = node;
	return (node);
}
