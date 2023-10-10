#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_realloc - reallocates a memory block
  *@ptr: a pointer to the memory previously allocated
  *@old_size: the size of the allocated space for the previous memory
  *@new_size: the size that will be allocated for the new memory
  *Return: the contents of the previous memory up to the minimum space
  *of either the new or old memory, or NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (new_ptr);
}
