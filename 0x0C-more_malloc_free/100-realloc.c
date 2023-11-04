#include "main.h"
/**
  *_realloc - reallocates a memory block using malloc and free
  *@ptr: pointer to the old memory
  *@old_size: the size of the old memory
  *@new_size: the size of the new memory
  *Return: Nothing
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = (char *)malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	while (i > old_size && i > new_size)
	{
		new_ptr[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
