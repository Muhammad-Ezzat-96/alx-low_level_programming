#include "main.h"

/**
  *sup_fun - auciliary function
  *@n : input value
  *@i : the factor value
  *Return: either 1 or 0
  */
int sup_fun(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
	return (sup_fun(n, i + 1));
	}
}
/**
  *is_prime_number - checks for a number whether prime or not
  *@n : input value
  *Return: always 1 if prime, 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (sup_fun(n, 2));
}
