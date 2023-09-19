#include "main.h"
/**
  *swap_int - swaps the value for two different variables
  *@a : first variable
  *@b : second variable
  */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
