#include "lists.h"
/**
  *sum_listint - returns the sum of all the data (n) of a listint_t
  *@head: the head node
  *Return: the sum of all the data (n) of a listint_t
  */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	while (head != NULL)
	{
		i = head->n;
		sum = sum + i;
		head = head->next;
	}
	return (sum);
}
