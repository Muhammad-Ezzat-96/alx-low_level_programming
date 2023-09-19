#include "main.h"
/**
  *print_rev - prints a string backward
  *@s : thestring to be printed
  */
void print_rev(char *s)
{
	int l = 0;
	int p;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (p = l; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
