#include "lists.h"
/**
  *pop_listint - deletes the head node of a listint_t
  *@head: the head node
  *Return: the int data of the deleted node or 0
  */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	node = *head;
	if (node == NULL)
	{
		return (0);
	}
	*head = node->next;
	i = node->n;
	free(node);
	return (i);
}
