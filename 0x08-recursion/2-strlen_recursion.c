#include "main.h"
/**
  *_strlen_recursion - return the lenth of a string
  *@s: input value
  *Return: l
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
