#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *calloc - function that retur a pointer to dynamically allocated memory
  *@nmemb: count of elements
  *@size: size each element occupies
  *Return: pointer to the memory or NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * sizeof(unsigned int));
	if (ptr == NULL)
	{
	return (NULL);
	}
	return (ptr);
}
