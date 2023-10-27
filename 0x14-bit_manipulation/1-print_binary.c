#include "main.h"
/**
  *print_binary - prints the binary representation of a number
  *@n: the decimal number to be converted
  *Return: the binary representation
  */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1ul << 63;
	char c = '0';

	while (!(i & n) && i != 0)
		i = i >> 1;

	if (i == 0)
		write(1, &c, 1);

	while (i)
	{
		if (i & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		i = i >> 1;
	}
}
