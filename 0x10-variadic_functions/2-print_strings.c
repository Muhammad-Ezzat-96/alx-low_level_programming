#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - prints whatever number of string it's given
  *@separator: the separation sign between the string which is ", "
  *@n: number of passed arguments to the function
  *Retunr: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	if (separator == NULL)
		separator = "";
	if (n > 0)
	{
		printf("%s", va_arg(ptr, char *));
	}
	for (i = 1; i < n; i++)
	{
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		printf("%s%s", separator, va_arg(ptr, char *));
	}
	printf("\n");
	va_end(ptr);
}
