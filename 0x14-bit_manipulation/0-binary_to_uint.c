#include "main.h"
/**
  *binary_to_uint - function that converts a binary number to an unsigned int
  *@b: pointing to a string of 0 and 1 chars
  *Return: 0 or the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int number = 0;
	int base = 1;

	if (b == NULL)
		return (0);

	while (b[i + 1] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		i++;
	}

	while (i >= 0)
	{
		number = number + ((b[i] - '0') * base);
		base = base * 2;
		i--;
	}
	return (number);
}
