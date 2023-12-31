#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  *print_all - prints every arguments passed regardless of the type
  *@format: list of types of arguments passed to the function
  *Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *separator = "";
	va_list ptr;

	va_start(ptr, format);
	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
			i++;
			continue;
		}
		i++;
		separator = ", ";
	}
	}
	printf("\n");
	va_end(ptr);
}
