#include "main.h"
/**
  *_strcmp - function that compares two strings
  *@s1: first string
  *@s2: second string
  *Return: either 0 or the difference between the length of
  *the two strings
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	for (i = 0, *s1 != '\0', i++)
	{
		s1++;
	}

	for (j = 0, *s2 != '\0', j++)
	{
		s2++;
	}

	if (i == j)
		return (0);
	else
		return (i - j);
}
