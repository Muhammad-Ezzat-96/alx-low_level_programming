#include "main.h"
/**
  *print_numbers - prints given numbers
  *
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
