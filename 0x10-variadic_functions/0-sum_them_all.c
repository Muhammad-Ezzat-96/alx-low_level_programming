#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *sum_them_all - function sums the sums all its parameters
  *no matter how mny are they
  *@n: resembles the number of parameters we pass
  *Return: sum_them_all
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
