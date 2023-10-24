#include "lists.h"
/**
  *free_listint - frees a listint_t list
  *@head: the head node
  *Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *clear = head->next;

	while (head)
	{
		clear = head->next;
		head = clear;
		free(clear);
	}
}
