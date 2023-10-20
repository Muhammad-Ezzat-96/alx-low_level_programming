#include "lists.h"
/**
  *print_list - funtion to print all the contents of a sigle list
  *@h: node name
  *Return: the number of node
  */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		h = h->next;
	}
	return (i);
}
