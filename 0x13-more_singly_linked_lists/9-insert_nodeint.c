#include "lists.h"
/**
  *insert_nodeint_at_index - inserts a new node at a given position
  *@head: head node
  *@idx: the index where the node should be added
  *@n: the int value the new node will hold
  *Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *new_node;

	node = *head;
	if (node == NULL && idx != 0)
	{
		return (NULL);
	}


	if (idx != 0)
	{
		while (i < idx - 1 && node != NULL)
		{
			i++;
			node = node->next;
		}
	}


	new_node = (listint_t *)malloc(sizeof(listint_t));
	new_node->n = n;
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = *head;
		*head = new_node;
	}


	else
	{
		new_node->next = node->next;
	}
	return (new_node);
}
