#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *array_range - function that creats an array
  *@min: input value
  *@max: input value
  *Return: an array or NULL
  */
int *array_range(int min, int max)
{
	int *ptr;
	int j = 0;
	int i;

	if (min > max)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		min++;
	}
	i = 0;
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[j] = min;
		min++;
		j++;
	}
	return (ptr);
}
