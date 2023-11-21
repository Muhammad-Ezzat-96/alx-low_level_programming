#include "main.h"
/**
  *_strpbrk - function that searches a string for any of a set of bytes
  *@s: the string to be scanned
  *@accept: the string contianing the letter we're looking for
  *Return: pointer to the first mtching charachter or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			else
			{
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
