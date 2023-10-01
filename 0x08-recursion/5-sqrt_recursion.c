#include "main.h"
/**
  *aux_fun - Meant to assist with the calculation
  *@sqrt : the number we need the square root of
  *@rt : the square root itself
  *Return: if perfert "rt", if not perfect -1
  */
int aux_fun(int sqrt, int rt)
{
	if (rt * rt == sqrt)
	{
		return (rt);
	}
	else if (rt * rt > sqrt)
	{
		return (-1);
	}
	else
	{
		return (aux_fun(sqrt, rt + 1));
	}
}
/**
  *_sqrt_recursion - return the perfect square root of a given number
  *@n : input value
  *Return: "rt" or -1
  */
int _sqrt_recursion(int n)
{
	return (aux_fun(n, 0));
}
