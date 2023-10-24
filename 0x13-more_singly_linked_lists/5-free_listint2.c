#include "lists.h"
/**
  *free_listint2 - frees a listint_t list
  *@head: the head node
  *Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *clear;

	while (*head != NULL)
	{
		clear = *head;
		free (clear);
		*head = (*head)->next;
	}
	head = NULL;
}
