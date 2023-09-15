#include "main.h"
#include <stdio.h>
/**
  *_isupper -prog checks for upper case charcters
  *@c: variable text
  *Return: always 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
