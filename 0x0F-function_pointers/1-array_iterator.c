#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *array_iterator - executes a function given as a parameter
  *on each element of an array
  *@array: the array which we will operate upon
  *@size: the size of the array
  *@action: name of the pointer that referes to the function that we
  *need to call back
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
