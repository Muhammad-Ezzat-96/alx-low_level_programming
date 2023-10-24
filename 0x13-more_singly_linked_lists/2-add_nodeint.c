#include "lists.h"
/**
  *add_nodeint - function that adds a new node at the beginning of
  *a listint_t list
  *@head: the head node
  *@n: the int value contained in the node
  *Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
