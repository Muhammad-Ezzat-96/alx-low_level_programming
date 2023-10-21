#include "lists.h"
/**
  *list_len - function that returns the number of nodes inside a list
  *@h: name of the head node
  *Return: number of nodes included
  */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
