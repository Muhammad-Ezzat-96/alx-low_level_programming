#include "main.h"
/**
  *print_most_numbers - prints specific numbers
  *
  *Return: always 0
  */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50)
		{
			continue;
		}
		if (c == 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
