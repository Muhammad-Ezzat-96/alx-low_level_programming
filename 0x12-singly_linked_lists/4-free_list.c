#include "lists.h"
/**
  *free_list - frees a list
  *@head: the head node of the list
  *Return: nothing
  */
void free_list(list_t *head)
{
	list_t *clear;

	while (head != NULL)
	{
		clear = head->next;
		free(head->str);
		free(head);
		head = clear;
	}
}
