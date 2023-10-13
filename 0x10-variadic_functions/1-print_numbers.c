#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - prints a specific numbers
  *@separator: the string between the numbers ", "
  *@n: the number of arguments passed to the function
  *Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ptr);
	va_start(ptr, n);
	if (separator == NULL || *separator == 0)
	{
		separator = "";
	}
	if (n > 0)
	{
		printf("%d", va_arg(ptr, int));
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%s%d", separator, va_arg(ptr, int));
	}
	printf("\n");
	va_end(ptr);
}
