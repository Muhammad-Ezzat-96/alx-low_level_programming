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
	if (idx != 0)
	{
		while (i < idx - 1 && node != NULL)
		{
			i++;
			node = node->next;
		}
	}
	if (node == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = node->next;
		node->next = new_node;
	}
	return (new_node);
}
