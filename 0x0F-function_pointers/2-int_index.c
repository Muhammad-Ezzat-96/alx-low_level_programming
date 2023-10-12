#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *int_index - returns the index of the first element for which
  *the cmp function does not return 0
  *@array: the array inside which we will search for the number
  *@size: the count of elements inside the array
  *@cmp: pointer to the function to be invoked
  *Return: either the the index for the integer we're looking for or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
