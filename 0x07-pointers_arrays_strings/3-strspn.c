#include "main.h"
/**
  *_strspn - function that gets the length of a prefix substring
  *@s: the original string
  *@accept: the charachters to be counted
  *Return: the length of the prefix
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int k = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
				j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (k);
}
