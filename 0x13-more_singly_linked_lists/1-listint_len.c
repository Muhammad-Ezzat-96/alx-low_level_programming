#include "lists.h"
/**
  *listint_len - function that returns the number of elements in a
  *linked listint_t list
  *@h: pointer to the header node
  *Return: the number of the nodes
  */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
