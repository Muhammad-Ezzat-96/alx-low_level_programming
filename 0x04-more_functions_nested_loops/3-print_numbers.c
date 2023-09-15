#include "main.h"
#include <stdio.h>
/**
  *print_numbers - a function that prints the numbers, from 0 to 9
  *@c: speific number
  *Return: always 0
  */
void print_numbers(void)
{
	int c = 48;

	while (c >= 48 && c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
