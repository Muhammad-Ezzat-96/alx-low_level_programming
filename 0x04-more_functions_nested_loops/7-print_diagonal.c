#include "main.h"
/**
  *print_diagonal - prints a diagonal
  *@n : a charchter that specifies the shape of the diagonal
  *Return: always 0
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				_putchar('\\');
				else if (j < i)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
