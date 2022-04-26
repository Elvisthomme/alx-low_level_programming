#include "lists.h"

/**
  * get_nodeint_at_index - get the node at the specifier index of a listint_t
  * @head: a poiter to the head pointer
  * @index: the index of the node
  * Return: the pointer to the node element or NULL if it failed
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head)
	{
		while (index--)
		{
			if (head->next)
				head = head->next;
			else
				return (NULL);
		}
		return (head);
	}
	else
		return (NULL);
}
