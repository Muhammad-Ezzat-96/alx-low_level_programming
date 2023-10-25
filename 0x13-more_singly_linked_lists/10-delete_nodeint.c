#include "lists.h"
/**
  *delete_nodeint_at_index - deletes the node at index index of a listint_t
  *@head: the head node
  *@index: the index of the node the needs to be deleted
  *Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *del_node;

	node = *head;
	if (index != 0)
	{
		while (i < index - 1 && node != NULL)
		{
			i++;
			node = node->next;
		}
	}
	if (node == NULL || (node->next == NULL && index != 0))
		return (-1);

	del_node = *node->next;
	if (index != 0)
	{
		node->next = del_node->next;
		free(del_node);
	}
	else
	{
		free(node);
		*head = del_node;
	}
	return (1);
}
