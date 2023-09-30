#include "main.h"
/**
  *factorial - returns the factorial for any given number
  *@n : input value
  *Return: the factorial for the input number
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
