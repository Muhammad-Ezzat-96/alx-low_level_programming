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

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;

		i++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}
