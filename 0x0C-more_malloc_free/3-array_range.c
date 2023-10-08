#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *array_range - creates an array of ints
  *@min: minimum of value of the int
  *@max: maximum value of the int
  *Return: the desired array or NULL
  */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			while (min <= max)
			{
				ptr[i] = min;
				i++;
				min++;
			}
		return (ptr);
		}
	}
}
