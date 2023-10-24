#include "lists.h"
/**
  *get_nodeint_at_index - returns the nth node of a listint_t
  *@head: the head node
  *@index: the index of the node
  *Return: nth node of a listint_t
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
