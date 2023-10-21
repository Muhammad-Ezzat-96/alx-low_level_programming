#include "lists.h"
/**
  *add_node_end - function to add anode at the end of a list
  *@head: the head node of the list
  *@str: the string content of the node
  *Return: the address of the next node, or NULL in case of the last node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tail;
	char *dup;
	int i = 0;

	node = (list_t*)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}
	while (dup[i] != '\0')
	{
		i++;
	}
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
	node->str = dup;
	node->len = i;
	node->next = NULL;
	return (node->next);
}
