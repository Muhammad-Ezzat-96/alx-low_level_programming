#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_calloc - function that retur a pointer to dynamically allocated memory
  *@nmemb: count of elements
  *@size: size each element occupies
  *Return: pointer to the memory or NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * sizeof(unsigned int));
	for (i = 0; i < nmemb; i++)
	{
		ptr [i] = 0;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
