#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_name - prints a name
  *@name: the name that that is determined at the main function
  *@f: pointer to a function
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
