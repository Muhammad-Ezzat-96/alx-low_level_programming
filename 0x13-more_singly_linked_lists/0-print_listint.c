#include "lists.h"
/**
  *print_listint - function that prints all the elements of a listint_t list
  *@h: pointer to the header node
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
