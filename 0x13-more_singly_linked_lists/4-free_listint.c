#include "lists.h"
/**
  *free_listint - frees a listint_t list
  *@head: the head node
  *Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *clear;

	while (head != NULL)
	{
		clear = head->next;
		free(head);
		head = clear;
	}
}
