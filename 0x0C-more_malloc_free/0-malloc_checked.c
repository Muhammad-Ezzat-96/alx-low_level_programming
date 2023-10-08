#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *malloc_checked - function that automatically allocates a memory
  *@b: input value
  *Return: either a pointer to the allocated memory or 98 if it fails
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
