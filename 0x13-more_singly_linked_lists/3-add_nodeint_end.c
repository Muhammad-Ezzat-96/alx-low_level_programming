#include "lists.h"
/**
  *add_nodeint_end - function that adds a new node at the end of a
  *listint_t list
  *@head: the head node
  *@n: the int content of the node
  *Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tail;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			tail = *head;
			while (tail->next != NULL)
			{
				tail = tail->next;
			}
			tail->next = node;
		}
	}
	node->n = n;
	node->next = NULL;
	return (node);
}
